cmake_minimum_required(VERSION 3.28)
project(Langage_C-7 C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)
add_executable(fonction_variables_locales fonction_variables_locales.c)
add_executable(fonction_variable_globales fonction_variables_globales.c)
