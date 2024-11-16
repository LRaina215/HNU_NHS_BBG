import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.substitutions import Command
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():

    robot_description = Command(['xacro ', os.path.join(
        get_package_share_directory('rm_description'), 'urdf', 'infantry_gazebo.urdf.xacro')])

    robot_name_in_model = 'infantry'
    package_name = 'rm_description'
    urdf_name = "infantry_gazebo.urdf.xacro"

    pkg_share = FindPackageShare(package=package_name).find(package_name)
    urdf_model_path = os.path.join(pkg_share, f'urdf/{urdf_name}')
    gazebo_world_path = os.path.join(pkg_share, 'world/rmul.world')


    start_gazebo_cmd = ExecuteProcess(
        cmd=['gazebo', '--verbose','-s', 'libgazebo_ros_init.so', '-s', 'libgazebo_ros_factory.so', gazebo_world_path],
        output='screen')

    # Launch the robot
    # spawn_entity_cmd = Node(
    #     package='gazebo_ros',
    #     executable='spawn_entity.py',
    #     arguments=['-entity', robot_name_in_model,  '-file', urdf_model_path ], output='screen')

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[
            {'robot_description': robot_description}
        ]
    )

    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        parameters=[
            {'robot_description': robot_description,
             'rate': 100.0}
        ]
    )

    spawn_entity_cmd = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='urdf_spawner',
        output='screen',
        arguments=["-topic", "robot_description", "-entity", "infantry"]
    )

    return LaunchDescription([
        start_gazebo_cmd,
        robot_state_publisher,
        joint_state_publisher,
        spawn_entity_cmd

    ])
