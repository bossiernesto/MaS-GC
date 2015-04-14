message( STATUS ${CMAKE_SOURCE_DIR} )

include_directories( ${CMAKE_SOURCE_DIR}/common )
include_directories( ${CMAKE_SOURCE_DIR}/heap )
include_directories( ${CMAKE_SOURCE_DIR}/gcCore )

add_executable( heapTest
    heap_test.c
)

target_link_libraries( heapTest
    cspec
    GCHeap
)

