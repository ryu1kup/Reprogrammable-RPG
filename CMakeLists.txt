#
# CMakeLists.txt
#

cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
set(NAME_MAIN_PROGRAM main)
project(${NAME_MAIN_PROGRAM})

# set cxx flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++11")

# locate header files
include_directories(${PROJECT_SOURCE_DIR}/include)

# locate sources and headers
file(GLOB SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB INCS ${PROJECT_SOURCE_DIR}/include/*.hpp)

# compile and link your application
add_executable(${NAME_MAIN_PROGRAM} ${NAME_MAIN_PROGRAM}.cpp ${SRCS} ${INCS})

# install
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
install(TARGETS ${NAME_MAIN_PROGRAM} DESTINATION bin)
