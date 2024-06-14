cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

set(RAYLIB_VERSION 4.5.0)
FetchContent_Declare(
        raylib
        URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
        FIND_PACKAGE_ARGS ${RAYLIB_VERSION}
)
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib)

# Все файлы, которые нужно скомпилировать
add_executable(untitled
        src/game.cpp
        src/main.cpp
        src/block.cpp
        src/blocks.cpp
        src/colors.cpp
        src/grid.cpp
        src/position.cpp
        src/game.h
        src/block.h
        src/colors.h
        src/grid.h
        src/position.h
)

target_link_libraries(${PROJECT_NAME} raylib)
include_directories(doctest)

add_executable(my_tests test.cpp src/game.cpp src/grid.cpp src/block.cpp src/position.cpp src/colors.cpp)
target_link_libraries(my_tests raylib)

target_include_directories(my_tests PRIVATE doctest)

enable_testing()

add_test(NAME my_tests COMMAND my_tests)