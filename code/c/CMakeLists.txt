cmake_minimum_required(VERSION 3.28)
project(c C)

set(CMAKE_C_STANDARD 23)

add_executable(c
        grammar/scope.c
        files/header_files.h
        files/source_files.c
        files/others.c
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
