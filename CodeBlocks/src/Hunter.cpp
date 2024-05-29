#include <iostream>

#include "Hunter.h"


Hunter::~Hunter()
{
    //dtor
}

void Hunter::special(Ship* attackedShip){
    attackedShip->beAttacked(this);
    attackedShip->beAttacked(this);
    std::cout << "The attacking hunter ship executed the special attack " << this->getSpecialName() << std::endl;
}
