cmake_minimum_required(VERSION 3.21)
project(Draught)

set(CMAKE_CXX_STANDARD 14)

add_executable(Draught src/main.cpp src/board.cpp src/board.h src/position.cpp src/position.h src/piece.cpp src/piece.h)
