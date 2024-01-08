#include <string>
#include "card.h"
#include <iostream>

using namespace std;

std::string suits[4] = {"clubs", "diamonds", "hearts", "spades"};
std::string ranks[13] = {"ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king"};

Card::Card(Rank rank, Suit suit) {
    this->rank = rank;
    this->suit = suit;
}

Card::~Card() {
    
}

void Card::print_card() {
    cout << ranks[(int) this->rank - 1] << " of " << suits[(int) this->suit] << endl;
}