cmake_minimum_required(VERSION 3.22.1)
Project(CardGame)
set(SOURCES main.cpp 
            include/card.cpp 
            include/card.h 
            include/deck.cpp 
            include/deck.h 
            include/hand.cpp 
            include/hand.h 
            include/player.cpp
            include/player.h
            include/tables/table.cpp 
            include/tables/table.h
            include/tables/poker_table.cpp
            include/tables/poker_table.h)
add_executable(CardGame ${SOURCES})