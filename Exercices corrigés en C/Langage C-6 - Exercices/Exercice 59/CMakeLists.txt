cmake_minimum_required(VERSION 3.29)
project(Exercice_59 C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c
        programme_tableauInverse.c)
add_executable(programme_tableauInverse programme_tableauInverse.c)
