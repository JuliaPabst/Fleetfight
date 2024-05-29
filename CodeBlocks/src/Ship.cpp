#include "Ship.h"

Ship::Ship(ShipType type, int stealth, int size, int damage, std::string specialName){
    type_ = type;
    stealth_ = stealth;
    size_ = size;
    damage_ = damage;
    specialName_ = specialName;
}

Ship::~Ship(){}

ShipType Ship::getShipType(){
    return type_;
}

int Ship::getStealth(){
    return stealth_;
}

int Ship::getSize(){
    return size_;
}

int Ship::getDamage(){
    return damage_;
}

void Ship::beAttacked(Ship* attacker){
    stealth_ -= attacker->getDamage();
}
