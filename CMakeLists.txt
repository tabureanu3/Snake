cmake_minimum_required(VERSION 3.10)
project(Snake)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# optimize for size in release mode
set(CMAKE_CXX_FLAGS_RELEASE "-Os")

# include library from dependency folder
include_directories(${CMAKE_SOURCE_DIR}/dependencies/msvc-raylib/include)
link_directories(${CMAKE_SOURCE_DIR}/dependencies/msvc-raylib/lib)

add_library(snake_data SHARED
    "point.cpp"
    "apple.cpp"
    "board.cpp"
    "direction.cpp"
    "snake.cpp"
)
# create import library for Windows
set_target_properties(snake_data PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)

file(GLOB SOURCES "RaylibPainter.cpp" "engine.cpp" "main.cpp")
add_executable(Snake ${SOURCES})

target_link_libraries(Snake snake_data raylib winmm) # Leagă bibliotecile