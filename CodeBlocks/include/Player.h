#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Ship.h"
#include "Destroyer.h"
#include "Cruiser.h"
#include "Hunter.h"

class Player {
public:
    Player();
    virtual ~Player();
    void setLengthOfShipsVector(int length);
    void setPlayerNumber(int number);
    void setShip(int index, Ship* ship);
private:
    std::vector<Ship*> ships_;
    int playerNumber_;
};

#endif // PLAYER_H
