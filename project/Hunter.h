#ifndef PROJECT_HUNTER_H
#define PROJECT_HUNTER_H
#include "Ship.h"

class Hunter : Ship {
public:
    Hunter(ShipType type, int stealth, int size, std::string specialName);
private:
    void special() const override;
};

#endif //PROJECT_HUNTER_H
