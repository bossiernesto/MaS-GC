#include "logger.c"

void* gcmalloc (size_t size)
{
    void* result = malloc(size);

    if (!result)
    {
    	log_error("Failed allocating block size");
    }

    memset(result, 0 , size);
    return result;

}
