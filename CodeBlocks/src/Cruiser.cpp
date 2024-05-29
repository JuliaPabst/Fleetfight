#include <iostream>

#include "Cruiser.h"


Cruiser::~Cruiser()
{
    //dtor
}

void Cruiser::special(Ship* attackedShip) {
    std::cout << "The attacking hunter ship executed the special attack " << this->getSpecialName() << std::endl;
}
