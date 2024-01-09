
#ifndef CARD_H_
#define CARD_H_

enum class Suit { clubs, diamonds, hearts, spades};
enum class Rank { 
    ace = 1, 
    two = 2, 
    three = 3, 
    four = 4, 
    five = 5, 
    six = 6, 
    seven = 7, 
    eight = 8, 
    nine = 9, 
    ten = 10, 
    jack = 11, 
    queen = 12, 
    king = 13
};

class Card {
   
    public:
        Card(Rank rank, Suit suit);
        ~Card();
        void print_card();
        bool operator==(const Card &rhs) const {
            return rhs.rank == rank && rhs.suit == suit;
        }

    private:
        Rank rank;
        Suit suit;

};

#endif