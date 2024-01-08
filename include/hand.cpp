#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "card.h"
#include "hand.h"

Hand::Hand() {

}

Hand::~Hand() {

}

void Hand::add_card(Card card) {
    cards.push_back(card);
} 

Card Hand::play_card(Card card) {
    //TODO: catch playing not existant card
    cards.erase(std::remove(cards.begin(), cards.end(), card), cards.end());
    return card;
}


vector<Card> Hand::get_cards() {
    return cards;
}
