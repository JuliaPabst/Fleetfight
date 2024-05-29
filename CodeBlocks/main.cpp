#include <iostream>
#include <cstdlib> // rand() and srand()
#include <ctime> // time

#include "Cruiser.h"
#include "Destroyer.h"
#include "Game.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Game game;
    game.playGame();

    return 0;
}
