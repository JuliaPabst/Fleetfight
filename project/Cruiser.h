#ifndef PROJECT_CRUISER_H
#define PROJECT_CRUISER_H
#include "Ship.h"

class Cruiser : Ship {
public:
    Cruiser(ShipType type, int stealth, int size, std::string specialName);
private:
    void special() const override;
};

#endif //PROJECT_CRUISER_H
