//
// Created by cedri on 2024-02-25.
//

#ifndef CARD_H
#define CARD_H


#include <string>

class Card {
public:
    Card(std::string type, int value);
    std::string getType();
    int getValue();

private:
    const std::string HEARTS = "Hearts",
        SPADES = "Spades",
        DIAMONDS = "Diamonds",
        CLUBS = "Clubs";
    std::string type;

    const int K = 13,
        Q = 12,
        J = 11;
    int value;

};


#endif //CARD_H
