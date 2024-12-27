cmake_minimum_required(VERSION 3.28)
project(c C)

set(CMAKE_C_STANDARD 23)

add_executable(c
        grammar/scope.c
        header/header.h
        header/test_header.c
        header/test_header_run.c
        grammar/comment.c
        grammar/control.c
        grammar/type.c
        grammar/var.c
        grammar/internal.c
        grammar/operator.c
        grammar/function.c
        grammar/array.c
        grammar/struct.c
        grammar/pointer.c
)
