cmake_minimum_required(VERSION 2.8.4)
project(gc_in_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lcspec")

add_subdirectory(lib_cspec)
add_subdirectory( common )
add_subdirectory( heap )
add_subdirectory( gcCore )
add_subdirectory( test )
