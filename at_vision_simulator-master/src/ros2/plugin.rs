use crate::ros2::capture::{CaptureConfig, RosCaptureContext, RosCapturePlugin};
use crate::ros2::topic::*;
use crate::{
    InfantryChassis,
    InfantryGimbal, InfantryViewOffset, LocalInfantry, arc_mutex, publisher,
    robomaster::power_rune::{PowerRune, RuneIndex},
};
use bevy::prelude::*;
use bevy::render::render_resource::TextureFormat;
use r2r::ClockType::SystemTime;
use r2r::geometry_msgs::msg::{Pose, PoseStamped};
use r2r::{Clock, Context, Node, std_msgs::msg::Header, tf2_msgs::msg::TFMessage};
use std::f32::consts::PI;
use std::time::Duration;
use std::{
    sync::{
        Arc, Mutex,
        atomic::{AtomicBool, Ordering},
    },
    thread::{self, JoinHandle},
};
// 引入 futures 库用于处理 ROS2 订阅消息
use futures::{executor::LocalPool, task::LocalSpawnExt, stream::StreamExt};

// --- [新增 1] 定义共享数据结构 ---
#[derive(Resource, Default)]
pub struct GimbalCommand {
    pub yaw_speed: f32,
    pub pitch_speed: f32,
}

#[derive(Resource, Clone)]
pub struct SharedGimbalCommand(pub Arc<Mutex<GimbalCommand>>);
// --------------------------------

pub const M_ALIGN_MAT3: Mat3 = Mat3::from_cols(
    Vec3::new(0.0, -1.0, 0.0), // M[0,0], M[1,0], M[2,0]
    Vec3::new(0.0, 0.0, 1.0),  // M[0,1], M[1,1], M[2,1]
    Vec3::new(-1.0, 0.0, 0.0), // M[0,2], M[1,2], M[2,2]
);

#[inline]
pub fn transform(bevy_transform: Transform) -> r2r::geometry_msgs::msg::Transform {
    let align_rot_mat = M_ALIGN_MAT3;
    let align_quat = Quat::from_mat3(&align_rot_mat);
    let new_rotation = align_quat * bevy_transform.rotation * align_quat.inverse();
    let new_translation = align_rot_mat * bevy_transform.translation;
    r2r::geometry_msgs::msg::Transform {
        translation: r2r::geometry_msgs::msg::Vector3 {
            x: new_translation.x as f64,
            y: new_translation.y as f64,
            z: new_translation.z as f64,
        },
        rotation: r2r::geometry_msgs::msg::Quaternion {
            x: new_rotation.x as f64,
            y: new_rotation.y as f64,
            z: new_rotation.z as f64,
            w: new_rotation.w as f64,
        },
    }
}

macro_rules! res_unwrap {
    ($res:tt) => {
        $res.0.lock().unwrap()
    };
}

#[derive(Resource)]
struct StopSignal(Arc<AtomicBool>);

#[derive(Resource)]
struct SpinThreadHandle(Option<JoinHandle<()>>);

#[derive(Component)]
pub struct MainCamera;

#[derive(Resource)]
pub struct RoboMasterClock(pub Arc<Mutex<Clock>>);

#[macro_export]
macro_rules! add_tf_frame {
    ($ls:ident, $hdr:expr, $id:expr, $translation:expr, $rotation:expr) => {
        $ls.push(::r2r::geometry_msgs::msg::TransformStamped {
            header: $hdr.clone(),
            child_frame_id: $id.to_string(),
            transform: crate::ros2::plugin::transform(
                Transform::IDENTITY
                    .with_translation($translation)
                    .with_rotation($rotation),
            ),
        });
    };
    ($ls:ident, $hdr:expr, $id:expr, $transform:expr) => {
        $ls.push(::r2r::geometry_msgs::msg::TransformStamped {
            header: $hdr.clone(),
            child_frame_id: $id.to_string(),
            transform: crate::ros2::plugin::transform($transform),
        });
    };
}

#[macro_export]
macro_rules! pose {
    ($hdr:expr) => {
        PoseStamped {
            header: $hdr.clone(),
            pose: Pose {
                position: r2r::geometry_msgs::msg::Point {
                    x: 0.0,
                    y: 0.0,
                    z: 0.0,
                },
                orientation: r2r::geometry_msgs::msg::Quaternion {
                    x: 0.0,
                    y: 0.0,
                    z: 0.0,
                    w: 1.0,
                },
            },
        }
    };
}

fn capture_rune(
    camera: Single<&GlobalTransform, With<MainCamera>>,
    gimbal: Single<&GlobalTransform, (With<LocalInfantry>, With<InfantryGimbal>)>,
    _view_offset: Single<&InfantryViewOffset, With<LocalInfantry>>,

    runes: Query<(&GlobalTransform, &PowerRune)>,
    targets: Query<(&GlobalTransform, &RuneIndex, &Name)>,

    clock: ResMut<RoboMasterClock>,
    tf_publisher: ResMut<TopicPublisher<GlobalTransformTopic>>,
    gimbal_pose_pub: ResMut<TopicPublisher<GimbalPoseTopic>>,
    odom_pose_pub: ResMut<TopicPublisher<OdomPoseTopic>>,
    camera_pose_pub: ResMut<TopicPublisher<CameraPoseTopic>>,
) {
    let cam_transform = camera.into_inner();
    let stamp = Clock::to_builtin_time(&res_unwrap!(clock).get_now().unwrap());
    let mut transform_stamped = vec![];
    let map_hdr = Header {
        stamp: stamp.clone(),
        frame_id: "map".to_string(),
    };
    let odom_hdr = Header {
        stamp: stamp.clone(),
        frame_id: "odom".to_string(),
    };
    let gimbal_hdr = Header {
        stamp: stamp.clone(),
        frame_id: "gimbal_link".to_string(),
    };
    let camera_hdr = Header {
        stamp: stamp.clone(),
        frame_id: "camera_link".to_string(),
    };

    gimbal_pose_pub.publish(pose!(gimbal_hdr));
    odom_pose_pub.publish(pose!(odom_hdr));
    camera_pose_pub.publish(pose!(camera_hdr));

    add_tf_frame!(
        transform_stamped,
        map_hdr.clone(),
        "odom",
        gimbal.translation(),
        Quat::IDENTITY
    );
    add_tf_frame!(
        transform_stamped,
        odom_hdr.clone(),
        "gimbal_link",
        Vec3::ZERO,
        gimbal.rotation()
    );
    let cam_rel = cam_transform.reparented_to(gimbal.into_inner());
    add_tf_frame!(
        transform_stamped,
        gimbal_hdr.clone(),
        "camera_link",
        cam_rel.translation,
        cam_rel.rotation
    );
    add_tf_frame!(
        transform_stamped,
        camera_hdr.clone(),
        "camera_optical_frame",
        Vec3::ZERO,
        Quat::from_euler(EulerRot::ZYX, -PI / 2.0, PI, PI / 2.0)
    );
    for (transform, rune) in runes {
        add_tf_frame!(
            transform_stamped,
            map_hdr.clone(),
            format!("power_rune_{:?}", rune.mode)
                .to_string()
                .to_lowercase(),
            transform.compute_transform()
        );
    }
    for (target_transform, target, name) in targets {
        if !name.contains("_ACTIVATED") {
            continue;
        }
        if let Ok((_rune_transform, rune)) = runes.get(target.1) {
            add_tf_frame!(
                transform_stamped,
                Header {
                    stamp: stamp.clone(),
                    frame_id: format!("power_rune_{:?}", rune.mode)
                        .to_string()
                        .to_lowercase(),
                },
                format!("power_rune_{:?}_{:?}", rune.mode, target.0)
                    .to_string()
                    .to_lowercase(),
                target_transform.reparented_to(_rune_transform)
            );
        }
    }
    tf_publisher.publish(TFMessage {
        transforms: transform_stamped,
    });
}

// --- [新增 2] 接收 ROS 指令并控制云台的系统函数 ---
fn apply_ros_gimbal_control(
    time: Res<Time>,
    // 不读键盘了，改读我们要加的共享指令
    cmd_res: Res<SharedGimbalCommand>, 
    // 查询云台组件
    gimbal: Single<
        (&mut Transform, &mut InfantryGimbal),
        (With<LocalInfantry>, Without<InfantryChassis>),
    >,
) {
    // 尝试读取指令，读不到就算了
    if let Ok(cmd) = cmd_res.0.try_lock() {
        // 如果速度为0，直接跳过，省点算力
        if cmd.yaw_speed == 0.0 && cmd.pitch_speed == 0.0 {
            return;
        }

        let dt = time.delta_secs();
        let (mut gimbal_transform, mut gimbal_data) = gimbal.into_inner();

        // 1. 更新角度数据
        // 注意：Twist 是速度 (rad/s)，所以 角度 += 速度 * dt
        // 这里的正负号可能需要根据模拟器的坐标系调整
        gimbal_data.local_yaw += cmd.yaw_speed * dt;
        gimbal_data.pitch += cmd.pitch_speed * dt;

        // 2. 限制俯仰角 (防止穿模，参考 main.rs)
        gimbal_data.pitch = gimbal_data.pitch.clamp(-0.785, 0.785);

        // 3. 应用旋转
        let gimbal_rotation = Quat::from_euler(
            EulerRot::YXZ, 
            gimbal_data.local_yaw, 
            gimbal_data.pitch, 
            0.0
        );
        gimbal_transform.rotation = gimbal_rotation;
    }
}
// ---------------------------------------------------

fn cleanup_ros2_system(
    mut exit: MessageReader<AppExit>,
    stop_signal: Res<StopSignal>,
    mut handle_res: ResMut<SpinThreadHandle>,
) {
    if exit.read().len() > 0 {
        stop_signal.0.store(true, Ordering::Release);
        if let Some(handle) = handle_res.0.take() {
            info!("Waiting for ROS 2 spin thread to join...");
            match handle.join() {
                Ok(_) => info!("ROS 2 thread successfully joined. Safe to exit."),
                Err(_) => error!("WARNING: ROS 2 thread panicked or failed to join."),
            }
        }
    }
}

#[derive(Default)]
pub struct ROS2Plugin {}

impl Plugin for ROS2Plugin {
    fn build(&self, app: &mut App) {
        let mut node = Node::create(Context::create().unwrap(), "simulator", "robomaster").unwrap();
        let signal_arc = Arc::new(AtomicBool::new(false));

        // --- [新增 3] 创建共享内存和订阅者 ---
        let command_data = Arc::new(Mutex::new(GimbalCommand::default()));
        let command_clone = command_data.clone(); // 克隆一份给 ROS 线程用

        let mut subscriber = node.subscribe::<r2r::geometry_msgs::msg::Twist>(
            "/cmd_gimbal", 
            r2r::QosProfile::default()
        ).expect("Failed to subscribe to /cmd_gimbal");
        // -----------------------------------

        publisher!(
            signal_arc,
            app,
            node,
            GlobalTransformTopic,
            GimbalPoseTopic,
            OdomPoseTopic,
            CameraPoseTopic
        );
        let camera_info = Arc::new(publisher!(signal_arc, node, CameraInfoTopic));
        let image_raw = Arc::new(publisher!(signal_arc, node, ImageRawTopic));
        let image_compressed = Arc::new(publisher!(signal_arc, node, ImageCompressedTopic));

        let clock = arc_mutex!(Clock::create(SystemTime).unwrap());

        app.insert_resource(RoboMasterClock(clock.clone()))
            .insert_resource(StopSignal(signal_arc.clone()))
            // --- [新增 4] 注册共享资源和系统 ---
            .insert_resource(SharedGimbalCommand(command_data)) 
            .add_systems(Update, apply_ros_gimbal_control)
            // ---------------------------------
            .add_plugins(RosCapturePlugin {
                config: CaptureConfig {
                    width: 1440,
                    height: 1080,
                    texture_format: TextureFormat::bevy_default(),
                    fov_y: PI / 180.0 * 45.0,
                },
                context: RosCaptureContext {
                    clock,
                    camera_info,
                    image_raw,
                    image_compressed,
                },
            })
            .add_systems(Last, cleanup_ros2_system)
            .add_systems(Update, capture_rune.after(TransformSystems::Propagate))
            // --- [修改] ROS 2 线程逻辑 ---
            .insert_resource(SpinThreadHandle(Some(thread::spawn(move || {
                // 创建一个本地异步执行器来运行订阅 stream
                let mut pool = LocalPool::new();
                let spawner = pool.spawner();

                // 生成一个异步任务来处理订阅消息
                spawner.spawn_local(async move {
                    // 当收到消息时...
                    while let Some(msg) = subscriber.next().await {
                        // 锁住共享内存并更新
                        if let Ok(mut cmd) = command_clone.lock() {
                            cmd.yaw_speed = msg.angular.z as f32;
                            cmd.pitch_speed = msg.angular.y as f32;
                        }
                    }
                }).unwrap();

                // 主循环
                while !signal_arc.load(Ordering::Acquire) {
                    // 1. 驱动异步任务 (订阅者)
                    pool.run_until_stalled();
                    
                    // 2. 驱动节点 (发布者、参数服务等)
                    node.spin_once(Duration::from_millis(5));
                    
                    thread::sleep(Duration::from_millis(5));
                }
            }))));
    }
}
