cmake_minimum_required(VERSION 3.15.0)

find_package(Qt5 REQUIRED COMPONENTS Core Network)

include_directories(${Qt5_INCLUDE_DIRS})

add_executable(server server.cpp)

target_link_libraries(server Qt5::Core Qt5::Network)