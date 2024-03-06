cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Card/Card.cpp
        Card/Card.hpp
        Deck/Deck.cpp
        Deck/Deck.hpp
        Player/Player.cpp
        Player/Player.hpp)
