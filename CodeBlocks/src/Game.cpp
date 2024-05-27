#include <iostream>

#include "Game.h"
#include "Player.h"

Game::Game()
{
    players_.resize(numberOfPlayers_);
}

Game::~Game()
{
    for(int i = 0; i < numberOfPlayers_; i++){
        delete players_[i];
    }
}

void Game::playGame(){
    std::cout << "Welcome to Fleet Fight! With how many ships do you want to play? (1-9)" << std::endl;
    std::cin >> numberOfShips_;

    for(int i = 0; i < numberOfPlayers_; i++){
        players_[i] = new Player();
        players_[i]->setPlayerNumber(i + 1);
        players_[i]->setLengthOfShipsVector(numberOfShips_);
    }

    std::cout << "Great, you chose " << numberOfShips_ << "ships!" << std::endl;

    chooseShips();

}

void Game::chooseShips(){
    for(int i = 0; i < numberOfPlayers_; i++){
        std::cout << "Player " << i << " it's your turn to choose what kind of ships you want!" << std::endl;
        for(int j = 0; j < numberOfShips_; j++){
            int chosenShip = 0;
            std::cout << "Which ship is your ship number " << j << "? (1 = destroyer, 2 = cruiser, 3 = hunter)" << std::endl;
            std::cin >> chosenShip;
            if(chosenShip == 1){
                //Destroyer Destroyer();
            }

        }
    }
}
