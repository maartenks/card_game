#include "player.h"

Player::Player() {

}

Player::Player(Hand hand) {
    this->hand = hand;
}

Player::~Player() {

}

void Player::deal_card(Card card) {
    this->hand.add_card(card);
} 

void Player::deal_hand(Hand hand) {
    this->hand = hand;
}