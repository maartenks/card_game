#include <iostream>
#include <string>
#include <vector>
#include "deck.h"

using namespace std;

string card_numbers[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
string card_types[4] = {"C", "D", "S", "H"}; //{"Clubs", "Diamonds", "Spades", "Hearts"}

deck::deck() {
    this->deck_size = 52;
    this->create_deck();
}

void deck::create_deck() {
    for (int i = 0; i < this->card_numbers->length(); i++) {
        for (int j = 0; j < this->card_types->length(); j++) {
            play_deck.push_back(this->card_types[j] + this->card_numbers[i]);
        }
    }
    cout << "Playing deck created" << endl;
}