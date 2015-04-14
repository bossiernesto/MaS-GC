#include "gc.c"

GCObject object1 = new_object(100);
GCObject object2 = new_object(300);

object_free(object1);