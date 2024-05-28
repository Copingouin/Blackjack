//
// Created by cedri on 2024-05-28.
//

#include "Hand.hpp"
#include <vector>
#include "../Card/Card.hpp"

Hand::Hand(Card card1, Card card2){
    Hand::addCard(card1);
    Hand::addCard(card2);
};

int Hand::getValue(){
    int value = 0;

    for (Card card:hand){
        value += card.getValue();
    }

    return value;
};

void Hand::addCard(Card card){
    Hand::hand.push_back(card);
}

void Hand::show() {
    for (Card card:hand){
        card.show();
    }
}

Hand::Hand() = default;