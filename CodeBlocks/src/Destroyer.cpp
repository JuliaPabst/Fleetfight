#include <iostream>

#include "Destroyer.h"


Destroyer::~Destroyer()
{
    //dtor
}

void Destroyer::special(Ship* attackedShip) {
    attackedShip->beAttacked(this);
    std::cout << "The attacking destroyer ship executed the special attack " << this->getSpecialName() << std::endl;
}
