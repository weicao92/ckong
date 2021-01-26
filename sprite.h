
#pragma once

#include <stdint.h>
#include <stdlib.h>

#define SPRITE_WIDTH (16)
#define SPRITE_HEIGHT (16)
#define SPRITE_SIZE (SPRITE_HEIGHT * SPRITE_WIDTH)
#define SPRITE_MAX (128)

typedef struct {
    uint8_t data[SPRITE_SIZE];
} sprite_bitmap_t;

const sprite_bitmap_t* sprite_bitmap(uint16_t tile);