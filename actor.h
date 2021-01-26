
#pragma once

#include <stdint.h>

typedef enum {
    f_actor_none    = 0b00000000,
} actor_flags_t;

typedef struct {
    int16_t x_offset;
    int16_t y_offset;
    uint16_t tile;
    uint8_t palette;
    uint8_t flags;
} animation_frame_tile_t;

typedef struct {
    uint16_t delay;
    uint8_t tile_count;
    animation_frame_tile_t tiles[32];
} animation_frame_t;

typedef struct {
    uint8_t frame_count;
    animation_frame_t frames[32];
} animation_t;


typedef struct actor {
    int16_t x;
    int16_t y;
    uint8_t frame;
    uint16_t data1;
    uint16_t data2;
    actor_flags_t flags;
    animation_t* animation;
} actor_t;
