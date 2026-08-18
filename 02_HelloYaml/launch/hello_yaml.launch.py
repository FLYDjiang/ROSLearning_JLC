import os

from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    params_file = os.path.join(
        get_package_share_directory('hello_yaml'),
        'config',
        'params.yaml'
    )

    hello_yaml_node = Node(
        package='hello_yaml',
        executable='hello_yaml_node',
        name='hello_yaml_node',
        output='screen',
        parameters=[params_file]
    )

    return LaunchDescription([
        hello_yaml_node
    ])