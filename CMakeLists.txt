cmake_minimum_required(VERSION 3.11)
project(ckong C)

set(CMAKE_C_STANDARD 11)

add_executable(
        ckong
        main.c
        sprite.c sprite.h
        palette.c palette.h
        str.h str.c
        actor.h actor.c)
