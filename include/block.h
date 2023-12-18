#pragma once

#include <raylib.h>

typedef struct {
    int ID;
    char *name;
    bool isSolid;
    Color color;
} Block;

static const Block BLOCKS[] = {
    {0, "Air", (Color){0, 0, 0, 0}},
    {1, "Stone", (Color){100, 100, 100, 255}},
    {2, "Dirt", (Color){139, 69, 19, 255}},
    {3, "Grass", (Color){0, 255, 0, 255}},
};
