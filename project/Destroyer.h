//
// Created by Julia Pabst on 22.05.24.
//

#ifndef PROJECT_DESTROYER_H
#define PROJECT_DESTROYER_H
#include "Ship.h"

class Destroyer : Ship {
public:
    Destroyer(ShipType type, int stealth, int size, std::string specialName);
private:
    void special() const override;
};


#endif //PROJECT_DESTROYER_H
