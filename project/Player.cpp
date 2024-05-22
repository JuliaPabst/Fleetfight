#include "Player.h"
#include "Ship.h"

void Player::setLengthOfShipsVector(int length){
    ships_.resize(length);
}

void Player::setPlayerNumber(int number){
    playerNumber_ = number;
}

void Player::setShip(int index, Ship& ship){
    ships_[index] = ship;
}