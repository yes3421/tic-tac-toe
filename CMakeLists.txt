cmake_minimum_required(VERSION 3.10)

project(Tic_tac_toe)

set(SOURCES
    src/main.cpp
    src/Board.cpp
    src/Cell.cpp
    src/Game.cpp
    src/Player.cpp
)

add_executable(Tic_tac_toe ${SOURCES})

target_include_directories(Tic_tac_toe
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)
