//
// Created by cedri on 2024-02-25.
//

#ifndef UNTITLED_DECK_H
#define UNTITLED_DECK_H


#include <list>
#include "../Card/Card.hpp"

class Deck{
public:
    Deck();
    void shuffle();
    Card next();
    void show();

private:
    std::list<Card> deck;
    int currentIndex;

    const std::string HEARTS = "Hearts",
            SPADES = "Spades",
            DIAMONDS = "Diamonds",
            CLUBS = "Clubs";

};


#endif //UNTITLED_DECK_H
