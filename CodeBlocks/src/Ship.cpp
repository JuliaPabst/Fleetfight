#include "Ship.h"

Ship::Ship(ShipType type, int stealth, int size, int damage, std::string specialName){
    type_ = type;
    stealth_ = stealth;
    size_ = size;
    damage_ = damage;
    specialName_ = specialName;
}

Ship::~Ship(){}
