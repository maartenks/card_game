
#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <vector>
#include <map>
#include "hand.h"
#include "player.h"
#include "chips.h"

using namespace std;

class Player {
   
    public:
        Player();
        Player(Hand hand);
        Player(map<Chips, int> chips);
        Player(Hand hand, map<Chips, int> chips);
        ~Player();
        void deal_card(Card card);
        void deal_hand(Hand hand);
        Hand show_hand();
        void buy_in(map<Chips, int> chips);
    private:
        map<Chips, int> chips;
        Hand hand;

};

#endif