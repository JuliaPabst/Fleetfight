#ifndef PROJECT_SHIP_H
#define PROJECT_SHIP_H
#include "Game.h"


typedef enum ShipType {
    destroyer, cruiser, hunter
} ShipType;

class Ship {
public:
    Ship(ShipType type, int stealth, int size, int damage, std::string specialName);
    virtual ~Ship();
    virtual void special() const;

private:
    ShipType type_;
    int stealth_;
    int size_;
    int damage_;
    std::string specialName_;
};


#endif //PROJECT_SHIP_H

