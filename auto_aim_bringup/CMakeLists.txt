cmake_minimum_required(VERSION 3.8)
project(auto_aim_bringup)

find_package(ament_cmake_auto REQUIRED)
<<<<<<< HEAD

=======
# Install files
install(DIRECTORY
        launch
        DESTINATION share/${PROJECT_NAME})
>>>>>>> a8048d3a0e31d3c689d4b46f5ca9b869874a26fc
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package(
  INSTALL_TO_SHARE
  config
  launch
)
