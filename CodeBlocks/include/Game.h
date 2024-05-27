#ifndef GAME_H
#define GAME_H
#include <vector>

#include "Player.h"
#include "Destroyer.h"
#include "Cruiser.h"
#include "Hunter.h"

class Player;

class Game {
public:
    Game();
    virtual ~Game();
    void playGame();

private:
    void chooseShips();
    std::vector<std::string> types_;
    std::vector<Player*> players_;
    int numberOfShips_;
    int numberOfPlayers_ = 2;
};

#endif // GAME_H
