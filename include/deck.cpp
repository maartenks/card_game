#include <iostream>
#include <string>
#include <vector>
#include "deck.h"
#include "card.h"

using namespace std;

Deck::Deck() {
    this->deck_size = 52;
    this->create_deck();
}

void Deck::create_deck() {
    for (int i = (int) Suit::clubs; i <= (int) Suit::spades; i++) {
        for (int j = (int) Rank::ace; j <= (int) Rank::king; j++) {
            play_deck.push_back(Card(static_cast<Rank>(j), static_cast<Suit>(i)));
        }
    }
    cout << "Playing deck created" << endl;
}

vector<Card> Deck::get_cards() {
    return play_deck;
}

void Deck::shuffle() {
    //TODO
}

