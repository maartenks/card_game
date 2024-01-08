
#ifndef DECK_H_
#define DECK_H_

#include <string>
#include <vector>

using namespace std;

class deck {
   
    public:
        deck();
        int deck_size;
        vector<string> play_deck;
        void create_deck();
    private:
        string card_numbers[13];
        string card_types[4];

};

#endif