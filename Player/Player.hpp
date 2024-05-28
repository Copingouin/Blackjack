//
// Created by cedri on 2024-03-06.
//

#ifndef UNTITLED_PLAYER_HPP
#define UNTITLED_PLAYER_HPP


#include "../Hand/Hand.hpp"

class Player {
public:
    Player(int);
    void setCash(int);
    int getCash();
    int number;
    void deal(Hand);
    void showHand();


private:
    static int staticNumber;
    int cash;
    Hand hand;
};


#endif //UNTITLED_PLAYER_HPP
