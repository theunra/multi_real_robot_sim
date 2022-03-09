# Install script for directory: /home/theunra/multi_real_robot_sim/src/nubot_common

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/theunra/multi_real_robot_sim/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nubot_common/msgs" TYPE FILE FILES
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/Angle.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/Point2d.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/PPoint.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/Point3d.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/RobotInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/MotorInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/BallInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/BallInfo3d.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/ObstaclesInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/OminiVisionInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/currentCmd.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/VelCmd.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/OdoInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/CoachInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/PassCommands.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/WorldModelInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/StrategyInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/TargetInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/FrontBallInfo.msg"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/msgs/simulation_strategy.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nubot_common/srv" TYPE FILE FILES
    "/home/theunra/multi_real_robot_sim/src/nubot_common/srv/BallHandle.srv"
    "/home/theunra/multi_real_robot_sim/src/nubot_common/srv/Shoot.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nubot_common/cmake" TYPE FILE FILES "/home/theunra/multi_real_robot_sim/build/nubot_common/catkin_generated/installspace/nubot_common-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/theunra/multi_real_robot_sim/devel/include/nubot_common")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/theunra/multi_real_robot_sim/devel/share/roseus/ros/nubot_common")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/theunra/multi_real_robot_sim/devel/share/common-lisp/ros/nubot_common")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/theunra/multi_real_robot_sim/devel/share/gennodejs/ros/nubot_common")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/theunra/multi_real_robot_sim/devel/lib/python3/dist-packages/nubot_common")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/theunra/multi_real_robot_sim/devel/lib/python3/dist-packages/nubot_common")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/theunra/multi_real_robot_sim/build/nubot_common/catkin_generated/installspace/nubot_common.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nubot_common/cmake" TYPE FILE FILES "/home/theunra/multi_real_robot_sim/build/nubot_common/catkin_generated/installspace/nubot_common-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nubot_common/cmake" TYPE FILE FILES
    "/home/theunra/multi_real_robot_sim/build/nubot_common/catkin_generated/installspace/nubot_commonConfig.cmake"
    "/home/theunra/multi_real_robot_sim/build/nubot_common/catkin_generated/installspace/nubot_commonConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nubot_common" TYPE FILE FILES "/home/theunra/multi_real_robot_sim/src/nubot_common/package.xml")
endif()

