#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Game.h"
#include "Ship.h"
#include "Destroyer.h"
#include "Cruiser.h"
#include "Hunter.h"


class Game;

class Player {
public:
    Player();
    virtual ~Player();
    Ship* getShip(int index);
    void setLengthOfShipsVector(int length);
    void setPlayerNumber(int number);
    void setShip(int index, Ship* ship);
    void printChosenShips(Game& game);
    void printSingleShip(int index, Game& game);
    bool checkIfHasLost();
    void sinkShip(int attackedShipIndex);
private:
    std::vector<Ship*> ships_;
    int playerNumber_;
};

#endif // PLAYER_H
