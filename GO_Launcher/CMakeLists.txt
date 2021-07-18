cmake_minimum_required(VERSION 3.0.0)
project(GO_Launcher VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(GO_Launcher main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
