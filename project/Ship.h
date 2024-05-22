#ifndef PROJECT_SHIP_H
#define PROJECT_SHIP_H
#include "Game.h"
#include <string>


class Ship {
public:
    Ship();
    virtual ~Ship();
    virtual void special() const;
private:
    ShipType type_;
    int stealth_;
    int size_;
    std::string specialName_;
};


#endif //PROJECT_SHIP_H
