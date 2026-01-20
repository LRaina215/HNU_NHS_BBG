cmake_minimum_required(VERSION 3.10)
project(armor_solver)

## Use C++14 (Or 17 as you set)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## By adding -Wall and -Werror, the compiler does not ignore warnings anymore,
## enforcing cleaner code.
add_definitions(-Wall -Werror -O3)

## Export compile commands for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#######################
## Find dependencies ##
#######################

# ==================== 修复崩溃的关键 ====================
# 必须和 armor_detector 保持完全一致的 OpenCV 版本！
set(OpenCV_DIR "/usr/local/opencv4.5.4/lib/cmake/opencv4")
find_package(OpenCV 4.5.4 REQUIRED)
# ========================================================

find_package(image_transport REQUIRED)
# 建议取消注释，因为你的代码里用了 tf2_eigen
find_package(tf2_eigen REQUIRED) 

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

###########
## Build ##
###########

ament_auto_add_library(${PROJECT_NAME} SHARED
  DIRECTORY src
)

# 显式链接 OpenCV，防止链接到系统默认版本
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN fyt::auto_aim::ArmorSolverNode
  EXECUTABLE ${PROJECT_NAME}_node
)

#############
## Testing ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  list(APPEND AMENT_LINT_AUTO_EXCLUDE
    ament_cmake_copyright
    ament_cmake_uncrustify
    ament_cmake_cpplint
  )
  ament_lint_auto_find_test_dependencies()

  find_package(ament_cmake_gtest)

endif()

#############
## Install ##
#############

ament_auto_package()
