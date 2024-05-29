#ifndef SHIP_H
#define SHIP_H

#include <string>


typedef enum ShipType {
    destroyer, cruiser, hunter
} ShipType;

class Ship {
public:
    Ship(ShipType type, int stealth, int size, int damage, std::string specialName);
    virtual ~Ship();
    ShipType getShipType();
    int getStealth();
    int getSize();
    int getDamage();
    void beAttacked(Ship* attacker);
    virtual void special() const = 0;

private:
    ShipType type_;
    int stealth_;
    int size_;
    int damage_;
    std::string specialName_;
};

#endif // SHIP_H
