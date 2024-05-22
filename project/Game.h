#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include <string.h>


enum class ShipType {
    destroyer, cruiser, hunter
};

class Game {
public:
    Game();
    void chooseShip();

private:
    void playGame();

    std::vector<std::string> types;
};


#endif //PROJECT_GAME_H
