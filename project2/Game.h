#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include <string>
#include <iostream>
#include "Player.h"
#include "Destroyer.h"
#include "Cruiser.h"
#include "Hunter.h"

class Game {
public:
    Game();
    void playGame();

private:
    void chooseShips();
    std::vector<std::string> types_;
    std::vector<Player> players_;
    int numberOfShips_;
    int numberOfPlayers_ = 2;
};


#endif //PROJECT_GAME_H