cmake_minimum_required(VERSION 2.8)

project(gc_common)

add_library( Common
    logger.c logger.c memory.c )

target_link_libraries(
    Common
)

