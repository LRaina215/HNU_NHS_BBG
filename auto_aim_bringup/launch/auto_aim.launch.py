import os
import sys
from ament_index_python.packages import get_package_share_directory
import yaml
from launch import LaunchDescription
from launch_ros.actions import Node

sys.path.append(os.path.join(get_package_share_directory('auto_aim_bringup'), 'launch'))


def generate_launch_description():
    def get_params(name):
        params_file = os.path.join(
            get_package_share_directory('auto_aim_bringup'),
            'config',
            'node_params',
            f'{name}_params.yaml'
        )
        if not os.path.exists(params_file):
            raise FileNotFoundError(f"Config file not found: {params_file}")
        return params_file

    armor_detector_node = Node(
        package='armor_detector',
        executable='armor_detector_node',
        emulate_tty=True,
        output='screen',
        name='armor_detector',
        parameters=[
<<<<<<< HEAD
            '/home/lraina/shaobing/src/auto_aim_bringup/config/node_params/armor_detector_params.yaml'
        ]
=======
            get_params('armor_detector')
        ],
>>>>>>> a8048d3a0e31d3c689d4b46f5ca9b869874a26fc
    )

    armor_solver_node = Node(
        package='armor_solver',
        executable='armor_solver_node',
        emulate_tty=True,
        output='screen',
        name='armor_solver',
        parameters=[get_params('armor_solver')],
    )

    return LaunchDescription([
        armor_detector_node,
        armor_solver_node,
    ])
