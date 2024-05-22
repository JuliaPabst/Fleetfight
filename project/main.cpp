#include <iostream>
#include "Game.h"

int main() {
    Game game();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#ifndef PROJECT_SHIP_H
#define PROJECT_SHIP_H
#include "Game.h"


typedef enum ShipType {
    destroyer, cruiser, hunter
} ShipType;

class Ship {
public:
    Ship();
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
