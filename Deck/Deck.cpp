//
// Created by cedri on 2024-02-25.
//

#include <iostream>
#include <random>
#include <algorithm>

#include "Deck.hpp"

Deck::Deck() {
    int index = 0;
    currentIndex = 0;
    std::string types[4] = {HEARTS, SPADES, CLUBS, DIAMONDS};

    for (std::string str:types){
        for (int i = 1; i <= 13; i++) {
            deck.push_back(Card(str ,i));
        }

    }
}

void Deck::shuffle() {
    currentIndex = 0;
    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };
    std::shuffle(deck.begin(), deck.end(), rng);
}

Card Deck::next() {
    return *std::next(deck.begin(), currentIndex++);
}

void Deck::show() {
    for (Card card:deck){
        card.show();
    }
}

