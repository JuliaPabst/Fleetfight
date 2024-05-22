#ifndef PROJECT_DESTROYER_H
#define PROJECT_DESTROYER_H
#include "Ship.h"

class Destroyer : public Ship {
public:
    Destroyer(ShipType type, int stealth, int size, int damage, std::string specialName);
private:
    void special() const override;
};


#endif //PROJECT_DESTROYER_H
