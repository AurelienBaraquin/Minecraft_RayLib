#pragma once

#include <raylib.h>

typedef struct {
    int ID;
    char *name;
    bool isSolid;
    Color color;
} Block;

static const Block BLOCKS[] = {
    {0, "Air", 0, (Color){0, 0, 0, 0}},
    {1, "Stone", 1, (Color){100, 100, 100, 255}},
    {2, "Dirt", 1, (Color){139, 69, 19, 255}},
    {3, "Grass", 1, (Color){0, 255, 0, 255}},
};
