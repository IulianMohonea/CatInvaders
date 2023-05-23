cmake_minimum_required(VERSION 3.24)
project(tema_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(tema_2 main.cpp Entity.h Enemy.h Entities.h Entities.cpp Player.cpp Enemies.h Enemies.cpp Bullets.cpp headers/Bullets.h headers/Bullets.h Game.h Game.cpp Timer.h Timer.cpp Errors.h Errors.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include/SFML)
target_link_libraries(tema_2 sfml-system sfml-window sfml-graphics sfml-audio)