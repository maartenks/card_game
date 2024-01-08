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
    this->cards.push_back(card);
} 

Card Hand::play_card(Card card) {
    //TODO: catch playing not existant card
    this->cards.erase(std::remove(this->cards.begin(), this->cards.end(), card), this->cards.end());
    return card;
}


vector<Card> Hand::get_cards() {
    return this->cards;
}

void Hand::show_hand() {
    for(Card card : this->cards) {
        card.print_card();
    }
}
