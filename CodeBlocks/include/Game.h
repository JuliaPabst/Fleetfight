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
    std::vector<std::string> getTypes();

private:
    void chooseShips();
    void choseNumberOfShips();
    void clearScreen();
    void printChosenShips();
    void printPlayingShip(int currentPlayer, int index);
    void fight();
    void attack(int currentPlayer);
    std::vector<std::string> types_;
    std::vector<Player*> players_;
    int numberOfShips_;
    int numberOfTypes_;
    int numberOfPlayers_;
};

#endif // GAME_H
