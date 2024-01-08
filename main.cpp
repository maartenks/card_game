#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "include/deck.h"
#include "include/card.h"

using namespace std;
 
int main(int argc, char *argv[])
{
    Deck deck;
    for (Card card : deck.get_cards()) {
        card.print_card();
    }
    return -1;
}