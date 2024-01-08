cmake_minimum_required(VERSION 3.22.1)
Project(CardGame)
set(SOURCES main.cpp include/card.cpp include/card.h include/deck.cpp include/deck.h)
add_executable(CardGame ${SOURCES})