#include <iostream>

#include "Game.h"
#include "Player.h"

Game::Game(){
    numberOfPlayers_ = 2;
    numberOfTypes_ = 3;

    players_.resize(numberOfPlayers_);
    types_.resize(numberOfTypes_);

    for(int i = 0; i < numberOfPlayers_; i++){
        players_[i] = new Player();
        players_[i]->setPlayerNumber(i + 1);
        players_[i]->setLengthOfShipsVector(numberOfShips_);
    }

    types_[0] = "Destroyer";
    types_[1] = "Cruiser";
    types_[2] = "Hunter";
}

Game::~Game()
{
    for(int i = 0; i < numberOfPlayers_; i++){
        delete players_[i];
    }
}

void Game::clearScreen() {
    system("cls");
}

std::vector<std::string> Game::getTypes(){
    return types_;
}

void Game::playGame(){
    std::cout << "Welcome to Fleet Fight!" << std::endl;

    choseNumberOfShips();

    std::cout << "Great, you chose " << numberOfShips_ << " ship(s)!" << std::endl;

    chooseShips();

    printChosenShips();

    fight();
}

void Game::choseNumberOfShips(){
    std::cout << "With how many ships do you want to play? (1-9)" << std::endl;
    std::cin >> numberOfShips_;

    for(int i = 0; i < numberOfPlayers_; i++){
        players_[i]->setLengthOfShipsVector(numberOfShips_);
    }
}

void Game::chooseShips(){
    for(int i = 0; i < numberOfPlayers_; i++){
        std::cout << "Player " << i + 1 << ", it's your turn to choose what kind of ships you want!" << std::endl;
        for(int j = 0; j < numberOfShips_; j++){
            int chosenShip = 0;
            while (chosenShip != 1 && chosenShip != 2 && chosenShip != 3){
                std::cout << "Which ship is your ship number " << j + 1 << "? (1 = destroyer, 2 = cruiser, 3 = hunter)" << std::endl;
                std::cin >> chosenShip;
                switch(chosenShip){
                    case 1: {
                        Destroyer* destroyer = new Destroyer();
                        players_[i]->setShip(j, destroyer);
                        break;
                    }
                    case 2: {
                        Cruiser* cruiser = new Cruiser();
                        players_[i]->setShip(j, cruiser);
                        break;
                    }
                    case 3:{
                        Hunter* hunter = new Hunter();
                        players_[i]->setShip(j, hunter);
                        break;
                    }
                    default: {
                        std::cout << "Choose 1, 2 or 3!" << std::endl;
                        break;
                    }
                }
            }
        }
    }
}

void Game::printChosenShips(){
    clearScreen();

    std::cout << "You chose these ships: " << std::endl;

    players_[0]->printChosenShips(*this);
    players_[1]->printChosenShips(*this);
}

void Game::printPlayingShip(int currentPlayer, int shipIndex){
    players_[currentPlayer]->printSingleShip(shipIndex, *this);
}

void Game::chooseShipForAttack(int player, int& shipIndex, Ship*& ship){
    while(ship == nullptr){
        shipIndex = rand() % numberOfShips_;
        ship = players_[player]->getShip(shipIndex);
    }
}

void Game::aimAndShoot(Ship* attackingShip, Ship* attackedShip){
    int dice = (rand() % 10) + 1;

    if(dice >= attackedShip->getSize()){
        std::cout << "stealth before attack: " << attackedShip->getStealth() << std::endl;
        attackedShip->beAttacked(attackingShip);
        std::cout << "stealth after attack: " << attackedShip->getStealth() << std::endl;
    } else {
        std::cout << "You missed the other ship!" << std::endl;
    }
}

void sinkShipIfStealthIsNegative(int attackedShipIndex, Ship* attackedShip){

}

void Game::fight(){
    int currentPlayer = 0;
    attack(currentPlayer);
    currentPlayer++;
    attack(currentPlayer);

    /*while(!players_[0]->checkIfHasLost() && !players_[0]->checkIfHasLost()){
        currentPlayer = currentPlayer % 2;
        attack(currentPlayer);
        currentPlayer++;
    }
    */

}


void Game::attack(int currentPlayer){
    int attackingShipIndex = 0;
    int attackedShipIndex = 0;
    Ship* attackingShip = nullptr;
    Ship* attackedShip = nullptr;
    int attackedPlayer = 0;

    if(currentPlayer == 0){
        attackedPlayer = 1;
    }

    std::cout << "It's your turn Player " << currentPlayer + 1 << "!" << std::endl;

    chooseShipForAttack(currentPlayer, attackingShipIndex, attackingShip);
    std::cout << "You are attacking with: ";
    printPlayingShip(currentPlayer, attackingShipIndex);

    chooseShipForAttack(attackedPlayer, attackedShipIndex, attackedShip);
    std::cout << "You are aiming at: ";
    printPlayingShip(attackedPlayer, attackedShipIndex);

    aimAndShoot(attackingShip, attackedShip);
    sinkShipIfStealthIsNegative(attackedShipIndex, attackedShip);
}
