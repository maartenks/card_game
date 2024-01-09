#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "include/deck.h"
#include "include/card.h"
#include "include/hand.h"
#include "include/player.h"
#include "include/tables/table.h"

using namespace std;
 
int main(int argc, char *argv[])
{
    vector<Player> players;
    for (int i = 0; i < 2; i++) {
        Player player;
        players.push_back(player);
    }
    Table table(players);
    table.show_table();
    table.shuffle();
    table.shuffle();
    table.deal_cards(2);
    table.show_table();
    return -1;
}