
#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <vector>
#include "hand.h"
#include "player.h"

using namespace std;

class Player {
   
    public:
        Player();
        Player(Hand hand);
        ~Player();
        void deal_card(Card card);
        void deal_hand(Hand hand);
        Hand hand;
    private:

};

#endif