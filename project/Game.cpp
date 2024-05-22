#include "Game.h"

Game::Game(){
    players_.resize(2);
}

void Game::playGame(){
    std::cout << "Welcome to Fleet Fight! With how many ships do you want to play? (1-9)" << std::endl;
    std::cin >> numberOfShips_;

    for(int i = 0; i < numberOfPlayers_; i++){
        players_[i].setPlayerNumber(i + 1);
        players_[i].setLengthOfShipsVector(numberOfShips_);
    }

    std::cout << "Great, you chose " << numberOfShips_ << "ships!" << std::endl;

    for(int i = 0; i < numberOfPlayers_; i++){
        std::cout << "Player " << i << " it's your turn to choose what kind of ships you want!" << std::endl;
        for(int j = 0; j < numberOfShips_; j++){
            players_[i].
        }
    }

}