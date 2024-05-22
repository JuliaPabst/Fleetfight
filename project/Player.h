#ifndef PROJECT_PLAYER_H
#define PROJECT_PLAYER_H
#include "Ship.h"


class Player {
public:
    void setLengthOfShipsVector();
    void setPlayerNumber();
private:
    std::vector<Ship> ships_;
    int playerNumber_

};


#endif //PROJECT_PLAYER_H
