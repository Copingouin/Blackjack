#include <iostream>
#include "Deck/Deck.h++"

int main() {
    Deck deck;
    deck.show();

    std::cout << deck.next().getType() << std::endl;


    return 0;
}
