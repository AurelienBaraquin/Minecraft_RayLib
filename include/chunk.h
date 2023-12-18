#pragma once

#include <block.h>

#define CHUNK_SIZE 16
#define CHUNK_HEIGHT 256

typedef struct {
    Block blocks[CHUNK_SIZE][CHUNK_HEIGHT][CHUNK_SIZE];
} Chunk;
