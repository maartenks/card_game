#include <vector>
#include "table.h"
#include <iostream>

Table::Table() {
    
}

Table::Table(vector<Player> players) {
    this->players = players;
}

Table::~Table() {

}

void Table::add_player(Player player) {
    this->players.push_back(player);
}

void Table::shuffle() {
    this->deck.shuffle();
}

void Table::deal_cards(int amount) {
    for(int i = 0; i < amount; i++) {
        for (int j = 0; j < this->players.size(); j++) {
            players[j].deal_card(this->deck.deal_card());
        }
    }
}

void Table::show_table() {
    for(int i = 0; i < players.size(); i++) {
        cout << "Player " << i + 1 << " cards:" << endl;
        players[i].hand.show_hand();
    }
}
