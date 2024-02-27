//
// Created by cedri on 2024-02-25.
//

#ifndef UNTITLED_DECK_HPP
#define UNTITLED_DECK_HPP


#include <vector>
#include "../Card/Card.hpp"

class Deck{
public:
    Deck();
    void shuffle();
    Card next();
    void show();


    std::vector<Card> deck;
    int currentIndex;

private:
    const std::string HEARTS = "Hearts",
            SPADES = "Spades",
            DIAMONDS = "Diamonds",
            CLUBS = "Clubs";

};


#endif //UNTITLED_DECK_HPP
