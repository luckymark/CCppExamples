#include "Game.h"

Game* Game::instance = nullptr;
std::default_random_engine Game::random_engine(time(0));

Game* Game::getInstance(){
    if(!instance){
        instance = new Game;
    }
    return instance;
}