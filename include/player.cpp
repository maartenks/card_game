#include "player.h"

Player::Player() {

}

Player::Player(Hand hand) {
    this->hand = hand;
}

Player::Player(map<Chips, int> chips) {
    this->chips = chips;
}

Player::Player(Hand hand, map<Chips, int> chips) {
    this->hand = hand;
    this->chips = chips;
}

Player::~Player() {

}

void Player::deal_card(Card card) {
    this->hand.add_card(card);
} 

void Player::deal_hand(Hand hand) {
    this->hand = hand;
}

void Player::buy_in(map<Chips, int> chips) {
    this->chips = chips;
}

Hand Player::show_hand() {
    this->hand.show_hand();
    return this->hand;
}