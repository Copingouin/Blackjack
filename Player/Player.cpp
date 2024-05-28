//
// Created by cedri on 2024-03-06.
//

#include <iostream>
#include "Player.hpp"

int Player::staticNumber = 1;

Player::Player(int cash) {
    Player::cash = cash;
    Player::number = staticNumber;
    staticNumber++;
}

void Player::setCash(int) {

}



int Player::getCash() {
    return 0;
}

void Player::deal(Hand hand) {
    Player::hand = hand;
}

void Player::showHand() {
    std::cout << "Player number " << number << " has these cards : " << std::endl;
    std::cout << "Adding up to : " << hand.getValue() << std::endl;
    hand.show();

}
