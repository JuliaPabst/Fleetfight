#include "Player.h"
#include <iostream>

Player::Player()
{
    //ctor
}

Player::~Player()
{
    for(Ship* ship : ships_){
        delete ship;
    }
}

void Player::setLengthOfShipsVector(int length){
    ships_.resize(length);
}

void Player::setPlayerNumber(int number){
    playerNumber_ = number;
}

void Player::setShip(int index, Ship* ship){
     if (index >= 0 && index < int(ships_.size())) {
        ships_[index] = ship;
    } else {
    std::cout << "Index out of range: " << index << std::endl;
    }
}

void Player::printChosenShips(Game& game){
    std::cout << "Player " << playerNumber_ << ": " << std::endl;
    for (Ship* ship : ships_){
        std::cout << game.getTypes()[ship->getShipType()] << std::endl;
    }
}
