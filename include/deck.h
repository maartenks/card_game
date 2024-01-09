
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
        Card deal_card();
        void burn_card();
    private:
        vector<Card> cards;

};

#endif