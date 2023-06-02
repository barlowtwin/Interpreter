#include "common.h"

typedef enum{
    OP_RETURN 
} OpCode;

typedef struct{
    int count;
    int capacity;
    uint8_t* code; 
} Chunk; 

// c has no constructors to initialize so we will write our own
void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);






