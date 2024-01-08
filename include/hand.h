
#ifndef HAND_H_
#define HAND_H_

#include <string>
#include <vector>
#include "card.h"

using namespace std;

class Hand {
   
    public:
        Hand();
        ~Hand();
        vector<Card> get_cards();
        void add_card(Card card);
        Card play_card(Card card);
        void show_hand();
    private:
        vector<Card> cards;

};

#endif