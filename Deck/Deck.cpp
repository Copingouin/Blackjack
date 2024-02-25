//
// Created by cedri on 2024-02-25.
//

#include <iostream>
#include "Deck.h++"

Deck::Deck() {
    currentIndex = 0;
    std::string types[4] = {HEARTS, SPADES, CLUBS, DIAMONDS};

    for (std::string str:types){
        for (int i = 1; i <= 13; i++) {
            deck.emplace_back(Card(str ,i));
        }

    }
}

void Deck::shuffle() {

}

Card Deck::next() {

    return *std::next(deck.begin(), currentIndex);
}

void Deck::show() {
    for (Card card:deck){
        std::cout << card.getValue() << " of " << card.getType() << std::endl;
    }
}

