cmake_minimum_required(VERSION 3.20)
set(CMAKE_GENERATOR "Ninja")
project(parallel-systems)

# Clang
set(CMAKE_C_COMPILER /opt/homebrew/opt/llvm/bin/clang)
set(CMAKE_CXX_COMPILER /opt/homebrew/opt/llvm/bin/clang++)
# MPIC
# set(CMAKE_C_COMPILER /opt/homebrew/bin/mpicc)
# set(CMAKE_CXX_COMPILER /opt/homebrew/bin/mpic++)
# GCC
# set(CMAKE_CXX_COMPILER /opt/homebrew/bin/g++-14)
# set(CMAKE_C_COMPILER /opt/homebrew/bin/gcc-14)

# Standards
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_STANDARD 23)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "Generate compile commands")

# find_package(MPI REQUIRED)
include(FindMPI)
include(FindOpenMP)


# include_directories(/usr/local/include)
include_directories(${MPI_INCLUDE_PATH})
include_directories(${MPI_CXX_INCLUDE_PATH})
add_executable(hw1 hw1-mpi.cpp)
target_link_libraries(hw1 ${MPI_LIBRARIES})
