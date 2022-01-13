cmake_minimum_required (VERSION 2.6)
project(matrix2json)
add_definitions(-std=c++11)

# set the ARMA and EIGEN paths and libs
set(ARMA_PREFIX "/usr")
set(ARMA_LIB_DIR "${ARMA_PREFIX}/lib/x86_64-linux-gnu/")
set(ARMA_LIBS "${ARMA_LIB_DIR}/libarmadillo.so")

include_directories(.)
include_directories(/usr/local/include/eigen3)

set(TARGET1_SOURCES cpp/arma.cpp)
set(TARGET2_SOURCES cpp/eigen.cpp)

add_executable(arma ${TARGET1_SOURCES})
target_link_libraries(arma "${ARMA_LIBS}")

add_executable(eigen ${TARGET2_SOURCES})