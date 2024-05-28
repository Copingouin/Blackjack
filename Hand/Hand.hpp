//
// Created by cedri on 2024-05-28.
//

#ifndef UNTITLED_HAND_HPP
#define UNTITLED_HAND_HPP

#include <vector>
#include "../Card/Card.hpp"

class Hand{
public:
    Hand(Card, Card);
    Hand();
    int getValue();
    void addCard(Card);
    void show();

private:
    std::vector<Card> hand;
};

#endif //UNTITLED_HAND_HPP
