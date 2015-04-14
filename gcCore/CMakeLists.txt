cmake_minimum_required(VERSION 2.8)

project(gc_core)

add_library( GCCore
    gc.h gc.c )

target_link_libraries(
    GCCore
)

