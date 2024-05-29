#ifndef CRUISER_H
#define CRUISER_H

#include "Ship.h"
#include <string>

class Cruiser : public Ship {
public:
    Cruiser() : Ship(cruiser, 250, 8, 50, "Bombardment") {}
    virtual ~Cruiser();
    void special(Ship* attackedShip) override;
private:

};

#endif // CRUISER_H
