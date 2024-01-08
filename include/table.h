
#ifndef TABLE_H_
#define TABLE_H_

#include <string>
#include <vector>
#include "deck.h"
#include "hand.h"
#include "player.h"

using namespace std;

class Table {
   
    public:
        Table();
        Table(vector<Player> players);
        ~Table();
        void add_player(Player player);
        void shuffle();
        void deal_cards(int amount);
        void show_table();
    private:
        vector<Player> players;
        Deck deck;

};

#endif