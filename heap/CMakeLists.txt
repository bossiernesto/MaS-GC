cmake_minimum_required(VERSION 2.8)

project(gc_heap)

add_library( GCHeap
    heap.h heap.c )

target_link_libraries(
    GCHeap
)

