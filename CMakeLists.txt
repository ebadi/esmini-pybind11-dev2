cmake_minimum_required(VERSION 3.1)
project (pyesmini)

#FetchContent_Declare(
#  esmini
#  GIT_REPOSITORY    https://github.com/esmini/esmini.git
#  GIT_TAG           0d4ff1ea0662f09aefc41382c8003e4617d48a6c
#)
#FetchContent_MakeAvailable(esmini)

message(STATUS "HEREYYYYYYYYYYYYY")
set(esmini_SOURCE_DIR esmini)
add_subdirectory(${esmini_SOURCE_DIR})
#include(${esmini_SOURCE_DIR})



set(CMAKE_BUILD_TYPE "Release") # https://github.com/microsoft/vcpkg/issues/20237?amp=1

message(STATUS "SCENARIOENGINE_INCLUDE_DIRS ${SCENARIOENGINE_INCLUDE_DIRS}")
message(STATUS "ROADMANAGER_INCLUDE_DIR ${ROADMANAGER_INCLUDE_DIR}")
message(STATUS "VIEWER_BASE_INCLUDE_DIR ${VIEWER_BASE_INCLUDE_DIR}")
message(STATUS "PLAYER_BASE_INCLUDE_DIR ${PLAYER_BASE_INCLUDE_DIR}")
message(STATUS "CONTROLLERS_INCLUDE_DIR ${CONTROLLERS_INCLUDE_DIR}")
message(STATUS "OSG_INCLUDE_DIR ${OSG_INCLUDE_DIR}")
message(STATUS "SUMO_INCLUDE_DIR ${SUMO_INCLUDE_DIR}")
message(STATUS "COMMON_MINI_INCLUDE_DIR ${COMMON_MINI_INCLUDE_DIR}")
message(STATUS "PUGIXML_INCLUDE_DIR ${PUGIXML_INCLUDE_DIR}")


add_subdirectory(pybind11)
pybind11_add_module(pyplayerbase src/playerbase/pyplayerbase.cpp)
include_directories(
  ${SCENARIOENGINE_INCLUDE_DIRS}
  ${ROADMANAGER_INCLUDE_DIR}
  ${VIEWER_BASE_INCLUDE_DIR}
  ${PLAYER_BASE_INCLUDE_DIR}
  ${CONTROLLERS_INCLUDE_DIR}
  ${OSG_INCLUDE_DIR}
  ${SUMO_INCLUDE_DIR}
  ${COMMON_MINI_INCLUDE_DIR}
  ${OSI_INCLUDE_DIR}
  ${PUGIXML_INCLUDE_DIR}
)

target_link_libraries(pyplayerbase PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
)
target_compile_definitions(pyplayerbase PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})