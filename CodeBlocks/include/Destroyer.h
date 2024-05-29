#ifndef DESTROYER_H
#define DESTROYER_H

#include "Ship.h"

class Destroyer : public Ship {
public:
    Destroyer() : Ship(destroyer, 150, 6, 60, "Zielsuchend") {}
    virtual ~Destroyer();
private:
    void special(Ship* attackedShip) override;
};

#endif // DESTROYER_H
