# CMakeLists.txt for event package. It creates a library with dictionary and a main program
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

set(CMAKE_VERBOSE_MAKEFILE 1)

set(Targets main)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)

#---Create a shared library with geneated dictionary
foreach(path IN LISTS Targets)
  get_filename_component(target ${path} NAME_WE)
  add_executable(${target} ${path}
													 ${sources} ${headers})
	target_link_libraries(${target} ${ROOT_LIBRARIES})
endforeach()

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/..)
install(TARGETS ${Targets} DESTINATION bin)
