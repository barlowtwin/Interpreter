#include<stdlib.h>
#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize){
    if (newSize == 0){
        free(pointer);
        return NULL;
    }

    void* result = realloc(pointer, newSize); //resize the memory block
    if (result == NULL) exit(1); // when memory does not exist for allocation
    return result;
}
