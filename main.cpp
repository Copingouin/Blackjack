#include <algorithm>
#include <iostream>
#include "Deck/Deck.hpp"
#include "Player/Player.hpp"

// Define your custom object


int main() {

    Player player1(100);
    Player player2(100);

    Deck deck;

    Hand hand1(deck.next(), deck.next());
    Hand hand2(deck.next(), deck.next());

    player1.deal(hand1);
    player2.deal(hand2);

    player1.showHand();
    player2.showHand();

    return 0;
}

