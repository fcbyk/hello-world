cmake_minimum_required(VERSION 3.28)
project(c C)

set(CMAKE_C_STANDARD 23)

add_executable(c
        main.c
        grammar/index.h
        grammar/var.c
        grammar/index.c
        utils/index.h
        utils/test.c
        grammar/type.c
        grammar/struct.c
)
