cmake_minimum_required(VERSION 3.28)
project(C_Basic C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Basic
        "Prime Number/main.c"
        index.c)
