#!/bin/bash

# 指定ROS的日志文件夹并赋予权限，否则会运行失败
export ROS_LOG_DIR=/home/robomaster/zxzzb/log
# 激活ros的环境
source /opt/ros/galactic/setup.bash
source /home/robomaster/zxzzb/install/setup.bash
# # 设置串口权限
# sudo chmod 777 /dev/ttyACM0

# 设置 OpenCV 库路径
export LD_LIBRARY_PATH=/usr/local/opencv4.5.4/lib:$LD_LIBRARY_PATH

# 定义需要监控的节点和启动命令
declare -A NODES=(
    ["hik_camera"]="ros2 launch hik_camera hik_camera.launch.py"
    ["rm_description"]="ros2 launch rm_description model.launch.py"
    ["armor_detector"]="ros2 run armor_detector armor_detector_node"
    ["armor_solver"]="ros2 run armor_solver armor_solver_node"
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

# 定义每个节点的启动失败计数器
declare -A FAIL_COUNTS=(
    ["hik_camera"]=0
    ["rm_description"]=0
    ["armor_detector"]=0
    ["armor_solver"]=0
    ["sentry_up_serial"]=0
)

# 定义最大允许的启动失败次数
MAX_FAIL_COUNT=3

# 监控节点状态
while [ -f "$FLAG_FILE" ]; do
    for NODE_NAME in "${!NODES[@]}"; do
        # 如果该节点已经失败超过最大次数，则跳过
        if [ "${FAIL_COUNTS[$NODE_NAME]}" -ge "$MAX_FAIL_COUNT" ]; then
            echo -e "${RED}$NODE_NAME has failed to start more than $MAX_FAIL_COUNT times. Skipping...${NC}"
            continue
        fi

        # 检查节点是否启动
        PIDS=$(ps -ef | grep "${NODES[$NODE_NAME]}" | grep -v grep | awk '{print $2}')
        if [ "$PIDS" != "" ]; then
            echo -e "${GREEN}$NODE_NAME is running!${NC}"
            # 如果节点成功启动，重置失败计数器
            FAIL_COUNTS[$NODE_NAME]=0
        else
            # 如果节点没有启动则启动
            echo -e "${RED}Start $NODE_NAME ! ! ! ! !${NC}"
            # 在新的终端窗口中启动节点，并传递环境变量
            gnome-terminal -- bash -c "export LD_LIBRARY_PATH=/usr/local/opencv4.5.4/lib:$LD_LIBRARY_PATH; echo 'Running $NODE_NAME...'; ${NODES[$NODE_NAME]}; exec bash"
            
            # 检查节点是否启动成功
            sleep 2 # 等待一段时间，确保节点有足够的时间启动
            PIDS=$(ps -ef | grep "${NODES[$NODE_NAME]}" | grep -v grep | awk '{print $2}')
            if [ "$PIDS" == "" ]; then
                # 如果节点仍然没有启动，增加失败计数器
                FAIL_COUNTS[$NODE_NAME]=$((FAIL_COUNTS[$NODE_NAME] + 1))
                echo -e "${RED}$NODE_NAME failed to start. Failure count: ${FAIL_COUNTS[$NODE_NAME]}${NC}"
                if [ "${FAIL_COUNTS[$NODE_NAME]}" -ge "$MAX_FAIL_COUNT" ]; then
                    echo -e "${RED}$NODE_NAME has failed to start more than $MAX_FAIL_COUNT times. Stopping attempts to start this node.${NC}"
                fi
            fi
        fi
    done
    sleep 5
done

echo "Autostart script stopped."