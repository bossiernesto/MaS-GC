#ifndef HEAP_H
#define HEAP_H

enum markStatus {
    unmarked=0,
    marked
};

struct HeapNode_str {
    size_t size;
    void * data;
    unsigned int mark;
    struct HeapNode_str* next;
    struct HeapNode_str* previous;
};
typedef struct HeapNode_str* HeapNode;

struct HeapList_str{
    unsigned int sizeList;
    struct HeapNode_str* first;
    struct HeapNode_str* last;
};
typedef struct HeapList_str* HeapList;


#endif