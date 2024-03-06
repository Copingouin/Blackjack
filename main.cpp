#include <algorithm>
#include <iostream>
#include "Deck/Deck.hpp"
#include "Player/Player.hpp"

// Define your custom object


int main() {
    /*Player player1(100);
    Player player2(200);

    std::cout << "Player" + player1.number;
    std::cout << "Player" + player2.number;
    */
    Deck deck;
    
    deck.show();
    deck.shuffle();
    deck.show();

    return 0;
}

