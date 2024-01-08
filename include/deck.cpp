#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "deck.h"
#include "card.h"

using namespace std;

Deck::Deck() {
    this->create_deck();
    this->deck_size = this->cards.size();
}

void Deck::create_deck() {
    for (int i = (int) Suit::clubs; i <= (int) Suit::spades; i++) {
        for (int j = (int) Rank::ace; j <= (int) Rank::king; j++) {
            cards.push_back(Card(static_cast<Rank>(j), static_cast<Suit>(i)));
        }
    }
    cout << "Playing deck created" << endl;
}

vector<Card> Deck::get_cards() {
    return cards;
}

Card Deck::deal_card() {
    Card card = cards.back();
    cards.pop_back();
    return card;
}

void Deck::shuffle() {
    random_shuffle(cards.begin(), cards.end());
    //TODO: random shuffle always shuffles the same it looks like
}



