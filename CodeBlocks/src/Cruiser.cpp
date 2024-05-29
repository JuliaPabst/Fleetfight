#include <iostream>

#include "Cruiser.h"


Cruiser::~Cruiser()
{
    //dtor
}

void Cruiser::special(Ship* attackedShip) {
    attackedShip->beAttacked(this);
    std::cout << "The attacking cruiser ship executed the special attack " << this->getSpecialName() << std::endl;

    int dice = (rand() % 10) + 1;

     if(dice >= attackedShip->getSize()){
        special(attackedShip);
    } else {
        return;
        std::cout << "You missed the other ship!" << std::endl;
    }

}
