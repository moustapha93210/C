cmake_minimum_required(VERSION 3.29)
project(Exercice_82 C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c
        programme_PtrsDiviseur.c)
add_executable(programme_PtrsDiviseur programme_PtrsDiviseur.c)
