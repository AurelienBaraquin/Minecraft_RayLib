#include <chunk.h>
#include <unistd.h>
#include <stdio.h>

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
                printf("%d ", chunk->blocks[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void) {
    // Chunk chunk;
    // chunk_init(&chunk);
    // chunk_write(1, &chunk);
    // chunk_read(0, &chunk);
    // chunk_print(&chunk);
    return 0;
}
