#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "include/deck.h"
#include "include/card.h"
#include "include/hand.h"

using namespace std;
 
int main(int argc, char *argv[])
{
    Hand hand;
    Deck deck;
    deck.shuffle();
    cout << deck.get_cards().size() << endl;
    hand.add_card(deck.deal_card());
    hand.add_card(deck.deal_card());
    cout << deck.get_cards().size() << endl;
    for (Card card : hand.get_cards()) {
        card.print_card();
    }
    hand.play_card(hand.get_cards()[1]);
    for (Card card : hand.get_cards()) {
        card.print_card();
    }
    return -1;
}