cmake_minimum_required(VERSION 3.8)
project(rm_description)

# find dependencies
find_package(ament_cmake REQUIRED)
<<<<<<< HEAD

=======
find_package(ament_cmake_auto REQUIRED)
>>>>>>> a8048d3a0e31d3c689d4b46f5ca9b869874a26fc
# Install files
install(DIRECTORY
        launch
        meshes
<<<<<<< HEAD
        config
=======
>>>>>>> a8048d3a0e31d3c689d4b46f5ca9b869874a26fc
        urdf
        world
        DESTINATION share/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

<<<<<<< HEAD
ament_package()
=======
ament_auto_package(
  INSTALL_TO_SHARE
  config
  launch
)

>>>>>>> a8048d3a0e31d3c689d4b46f5ca9b869874a26fc
