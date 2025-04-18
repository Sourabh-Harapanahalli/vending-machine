cmake_minimum_required(VERSION 3.5)
project(vending_machine_microservices)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-O3")
set(CMAKE_INSTALL_PREFIX /usr/local/bin)

# Tell CMake where to find the Thrift libraries
link_directories(/usr/local/lib)

# Ensure rpath includes linked library paths
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

# Add the src directory
add_subdirectory(src)
