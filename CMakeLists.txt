cmake_minimum_required (VERSION 2.8.11)

project (openann)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

#main app
add_executable(
  openann
  src/main.cpp
  src/Neuron.cpp
)
