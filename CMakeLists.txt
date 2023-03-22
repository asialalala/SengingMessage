cmake_minimum_required(VERSION 3.0.0)
project(SendingMessage VERSION 0.1.0)
add_executable(SendingMessage src/main.cpp src/RuntimeException.cpp src/QueueEmpty.cpp  src/nowa.cpp)
target_include_directories(SendingMessage PRIVATE inc/)