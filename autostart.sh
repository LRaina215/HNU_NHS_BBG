#!/bin/bash

# 指定ROS的日志文件夹并赋予权限，否则会运行失败
export ROS_LOG_DIR=/home/robomaster/zxzzb/log

# 激活ROS环境
source /opt/ros/galactic/setup.bash
source /home/robomaster/zxzzb/install/setup.bash

# 设置 OpenCV 库路径
export LD_LIBRARY_PATH=/usr/local/opencv4.5.4/lib:$LD_LIBRARY_PATH

# 定义需要监控的节点和启动命令
declare -A NODES=(
    ["hik_camera"]="ros2 launch hik_camera hik_camera.launch.py"
    ["rm_description"]="ros2 launch rm_description model.launch.py"
    ["armor_detector"]="ros2 launch auto_aim_bringup auto_aim.launch.py"
    ["sentry_up_serial"]="ros2 launch bubble_protocol sentry_up_serial_launch.py"
)

# ANSI 颜色代码
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # 重置颜色

# 全局标志文件
FLAG_FILE="/tmp/autostart_enabled"

# 创建标志文件
touch "$FLAG_FILE"

# 监控节点状态
while [ -f "$FLAG_FILE" ]; do
    for NODE_NAME in "${!NODES[@]}"; do
        # 检查节点是否启动
        PIDS=$(ps -ef | grep "${NODES[$NODE_NAME]}" | grep -v grep | awk '{print $2}')
        if [ "$PIDS" != "" ]; then
            echo -e "${GREEN}$NODE_NAME is running!${NC}"
        else
            # 如果节点没有启动则启动
            echo -e "${RED}Start $NODE_NAME ! ! ! ! !${NC}"
            # 在新的终端中启动节点
            gnome-terminal -- bash -c "echo 'Starting $NODE_NAME...'; ${NODES[$NODE_NAME]}; exec bash"
        fi
    done
    clear
    sleep 5

done

echo "Autostart script stopped."
