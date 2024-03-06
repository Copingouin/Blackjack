//
// Created by cedri on 2024-03-06.
//

#ifndef UNTITLED_PLAYER_HPP
#define UNTITLED_PLAYER_HPP


class Player {
public:
    Player(int);
    void setCash(int);
    int getCash();
    int number;

private:
    static int staticNumber;
    int cash;
};


#endif //UNTITLED_PLAYER_HPP
