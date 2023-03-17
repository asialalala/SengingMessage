# nie korzystaj z tego cmake'a bo nie dziala, kompiluj recznie

cmake_minimum_required(VERSION 3.7)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_COMPILER /usr/bin/g++)
project(tests)

add_executable(tests test.cpp catch_amalgamated.cpp)

target_include_directories(tests PUBLIC 
. 
../inc/)