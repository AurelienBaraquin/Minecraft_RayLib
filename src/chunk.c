#include <chunk.h>
#include <unistd.h>

void chunk_init(Chunk *chunk) {
    for (int i = 0; i < CHUNK_SIZE; i++) {
        for (int j = 0; j < CHUNK_HEIGHT; j++) {
            for (int k = 0; k < CHUNK_SIZE; k++) {
                chunk->blocks[i][j][k] = 0;
            }
        }
    }
}

void chunk_write(int fd, Chunk *chunk) {
    write(fd, chunk, sizeof(Chunk));
}

void chunk_read(int fd, Chunk *chunk) {
    read(fd, chunk, sizeof(Chunk));
}

void chunk_print(Chunk *chunk) {
    for (int i = 0; i < CHUNK_SIZE; i++) {
        for (int j = 0; j < CHUNK_HEIGHT; j++) {
            for (int k = 0; k < CHUNK_SIZE; k++) {
                write(1, chunk->blocks[i][j][k] + '0', 1);
            }
            write(1, "\n", 1);
        }
        write(1, "\n", 1);
    }
}
