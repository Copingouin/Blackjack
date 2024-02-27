//
// Created by cedri on 2024-02-25.
//

#include "Card.hpp"


Card::Card(std::string type, int value){
    Card::type = type;
    Card::value = value;
}

std::string Card::getType(){
    return type;
}

int Card::getValue(){
    return value;
}
