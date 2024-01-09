
#ifndef POKER_TABLE_H_
#define POKER_TABLE_H_

#include "table.h"

class Poker_Table: public Table {

    public:
        Poker_Table();
        void create_flop();
        void create_turn();
        void create_river();
        Card *get_flop();
        Card get_turn();
        Card get_river();
    private:
        Card flop[3];
        Card turn;
        Card river;
};

#endif