//
// Created by cedri on 2024-03-06.
//

#include "Player.hpp"

Player::Player(int cash) {
    Player::cash = cash;
    staticNumber = 1;
    number = staticNumber;
    staticNumber++;
}

void Player::setCash(int) {

}



int Player::getCash() {
    return 0;
}
