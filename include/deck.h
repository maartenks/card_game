
#ifndef DECK_H_
#define DECK_H_

#include <string>
#include <vector>
#include "card.h"

using namespace std;

class Deck {
   
    public:
        Deck();
        int deck_size;
        vector<Card> get_cards();
        void create_deck();
        void shuffle();
    private:
        vector<Card> play_deck;
        string card_numbers[13];
        string card_types[4];

};

#endif