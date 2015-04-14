#include <malloc.h>
#include "heap.h"
#include "../common/memory.c"

HeapList initialize_heap(size_t initial_nodes) {
    HeapList list = gcmalloc(sizeof(struct HeapList_str));
    list->first = list->last = NULL;

    return list;
}


void addHeapNode(HeapList heapList, size_t size, void *heapPtr) {
    HeapNode node = gcmalloc(sizeof(struct HeapNode_str));

    node->size = size;
    node->mark = unmarked;
    node->data = heapPtr;
    node->previous = node->next = NULL;

    if (heapList->sizeList == 0) {
        heapList->first = node;
        heapList->last = node;
    } else {
        heapList->last->next = node;
        node->previous = heapList->last;
        heapList->last = node;
    }

    heapList->sizeList++;
}

void freeHeapList(HeapList heapList) {
    HeapNode ptr;
    HeapNode next;

    for (ptr = heapList->first; ptr; ptr = next) {
        next = ptr->next;
        free(ptr);
    }
    free(heapList);
}
