#set minimum cmake version
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

#project name and language
project(ChessEngine LANGUAGES C)

add_executable(cjvercetti attack.c bitboards.c board.c data.c debug.c defs.h hashkeys.c init.c io.c main.c movegen.c validate.c)
