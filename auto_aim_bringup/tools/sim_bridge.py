#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rm_interfaces.msg import GimbalCmd 
import math
import time

class PIDController:
    """一个通用的PID类，方便管理"""
    def __init__(self, kp, ki, kd, max_out, max_i):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.max_out = max_out  # 最大输出速度 (rad/s)
        self.max_i = max_i      # 积分限幅
        
        self.prev_err = 0.0
        self.integral = 0.0

    def update(self, error, dt):
        if dt <= 0.0001: return 0.0 # 防止除零

        # P项
        p_out = self.kp * error

        # I项 (带积分分离/抗饱和)
        self.integral += error * dt
        # 限制积分项大小，防止超调
        if self.integral > self.max_i: self.integral = self.max_i
        elif self.integral < -self.max_i: self.integral = -self.max_i
        i_out = self.ki * self.integral

        # D项 (计算微分)
        derivative = (error - self.prev_err) / dt
        d_out = self.kd * derivative

        self.prev_err = error
        
        # 总输出
        output = p_out + i_out + d_out

        # 输出限幅
        if output > self.max_out: output = self.max_out
        elif output < -self.max_out: output = -self.max_out
        
        return output

    def reset(self):
        self.prev_err = 0.0
        self.integral = 0.0

class SimBridge(Node):
    def __init__(self):
        super().__init__('sim_bridge_node')
        
        # 1. 通信
        self.sub = self.create_subscription(
            GimbalCmd, '/armor_solver/cmd_gimbal', self.callback, 10)
        self.pub = self.create_publisher(
            Twist, '/cmd_gimbal', 10)
        
        # 2. 手动补偿 (Offset)
        self.MANUAL_PITCH_OFFSET = 0
        self.MANUAL_YAW_OFFSET = 0

        # ==========================================
        # 🛠️ [PID 参数调整区] 
        # 模拟器环境推荐参数：
        # Yaw:  Kp=8.0 (响应快), Ki=0.0 (无重力不需), Kd=0.1 (轻微阻尼)
        # Pitch: Kp=6.0, Ki=0.5 (抗重力), Kd=0.1
        # ==========================================
        
        # 创建两个独立的 PID 控制器
        # 参数顺序: (kp, ki, kd, max_speed_rad_s, max_integral)
        self.pid_yaw = PIDController(8.0, 0.0, 0.1, max_out=10.0, max_i=1.0) 
        self.pid_pitch = PIDController(6.0, 0.5, 0.1, max_out=5.0, max_i=0.5)

        # 状态变量
        self.target_yaw_rad = 0.0
        self.target_pitch_rad = 0.0
        
        self.last_msg_time = self.get_clock().now()
        self.last_loop_time = self.get_clock().now() # 用于计算真实 dt

        # 100Hz 循环
        self.create_timer(0.01, self.control_loop)

    def callback(self, msg):
        self.last_msg_time = self.get_clock().now()
        
        # 转换目标
        target_yaw_deg = msg.yaw_diff + self.MANUAL_YAW_OFFSET
        target_pitch_deg = msg.pitch_diff + self.MANUAL_PITCH_OFFSET

        self.target_yaw_rad = math.radians(target_yaw_deg)
        self.target_pitch_rad = math.radians(target_pitch_deg)

    def control_loop(self):
        now = self.get_clock().now()
        
        # 1. 计算真实的 dt (秒)
        dt = (now - self.last_loop_time).nanoseconds / 1e9
        self.last_loop_time = now
        
        # 2. 看门狗检查 (0.5s 超时)
        time_since_msg = (now - self.last_msg_time).nanoseconds / 1e9
        if time_since_msg > 0.5:
            self.target_yaw_rad = 0.0
            self.target_pitch_rad = 0.0
            self.pid_yaw.reset()   # 清除积分和历史
            self.pid_pitch.reset()
            # 可选：超时直接停机
            # self.pub.publish(Twist())
            # return

        # 3. 计算 PID 输出
        # 在这里，"误差" 就是 target_rad (因为我们想让 diff 变为 0)
        vel_z = self.pid_yaw.update(self.target_yaw_rad, dt)
        vel_y = self.pid_pitch.update(self.target_pitch_rad, dt)

        # 4. 发布
        twist = Twist()
        twist.angular.z = vel_z
        twist.angular.y = vel_y
        self.pub.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = SimBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
