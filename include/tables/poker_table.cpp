#include "poker_table.h"
#include "../card.h"


void Poker_Table::create_flop() {
    this->deck.burn_card();
    this->flop[0] = this->deck.deal_card();
    this->flop[1] = this->deck.deal_card();
    this->flop[2] = this->deck.deal_card();
}

void Poker_Table::create_turn() {
    this->deck.burn_card();
    this->turn = this->deck.deal_card();
}

void Poker_Table::create_river() {
    this->deck.burn_card();
    this->river = this->deck.deal_card();
}

Card *Poker_Table::get_flop() {
    return this->flop;
}

Card Poker_Table::get_turn() {
    return this->turn;
}

Card Poker_Table::get_river() {
    return river;
}