//
// Created by cedri on 2024-02-25.
//

#ifndef CARD_H
#define CARD_H


#include <string>

class Card {
public:
    Card(std::string, int);
    std::string getType();
    int getValue();
    std::string type;
    int value;
    void show();


    std::string HEARTS = "Hearts",
        SPADES = "Spades",
        DIAMONDS = "Diamonds",
        CLUBS = "Clubs";


    int K = 13,
        Q = 12,
        J = 11,
        A = 1;


};


#endif //CARD_H
