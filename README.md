# rm_auto_aim

FYT视觉24赛季装甲板识别与跟踪算法ROS2功能包

**主要参考**: [rm_vision](https://gitlab.com/rm_vision)

## 维护者及开源许可证

Maintainer : Chengfu Zou,  chengfuzou@outlook.com

```
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. 
```



**自瞄代码修改日志**

**基于 【RM2024-自瞄开源】天津大学北洋机甲-自瞄系统&OpenRM 算法库开源**  **对当前自瞄节点继续初步优化尝试**

#### 1. 优化：数字识别启用 GPU 批处理 (Batching)

- **问题：** `armor_detector_node` 中，`std::execution::par` (CPU并行) 在 `for` 循环中调用 `classify`。但 `classify` 内部的 `std::mutex` 导致 GPU 推理被**串行**执行，性能低下。
- **优化：**
  1. `std::execution::par` 循环现在只负责 CPU 密集型任务 (如 `extractNumber`)。
  2. 添加了新的 `classify_batch(armors)` 函数，在循环**之后**被调用。
  3. 此函数将所有数字图像打包，**一次性**发送给 GPU 进行并行批处理。
- **收益：** 极大提升了多目标识别时的 GPU 利用率和帧率。
- **控制：** 通过 `CMakeLists.txt` 中的 `ENABLE_GPU_BATCHING` 宏来启停此功能。



#### 2. 优化：实现迭代解算，提高弹道预测精度

- **问题：** `Solver::solve` 采用“单次预测”。它基于**当前**位置猜测 `flying_time`，然后预测**未来**位置。这导致“飞行时间”和“未来位置”不匹配（“鸡生蛋”问题）。
- **优化：**
  1. 在 `Solver::solve` 中实现了一个 3 次迭代的 `for` 循环。
  2. 循环内：a. 基于 `T_guess` 预测未来位置 `P`。 b. 计算击中 `P` 所需的真实飞行时间 `T_new`。 c. 将 `T_new` 作为下一次循环的 `T_guess`。
  3. 此迭代逻辑已应用于主预测路径。`controller_delay_` 分支遵照要求，保留了“单次预测”逻辑（但也应用了下方的坐标修正）。
- **收益：** 飞行时间和预测位置收敛到一个精确解，显著提高对移动目标（尤其反陀螺）的瞄准精度。



#### 3. 优化：修复坐标系错误，使用相对向量计算

- **问题：** 发现一个严重的数学BUG：`calcYawAndPitch`、`getFlyingTime` 和 `selectBestArmor` 等函数都隐式地假设云台（机器人）在 odom 原点 (0,0,0)。
- **优化：**
  1. 在 `Solver::solve` 中，首先查询 TF 获取云台的**当前 odom 位置** (`gimbal_pos_odom`)。
  2. 所有计算（弹道、选甲、Yaw/Pitch）全部修正为使用**相对向量** (`target_vec = future_pos - gimbal_pos_odom`)。
- **收益：** 解决了“机器人移动后自瞄不准”的根本问题。现在所有计算都是基于云台的**真实**相对位置，数学上完全鲁棒。



**[已完成代码修改，具体效果待实际运行验证]**

**代码仓库:** git@github.com:LRaina215/HNU_NHS_BBG.git