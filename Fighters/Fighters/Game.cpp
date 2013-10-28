//
//  Game.cpp
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Game.h"

Game* Game::instance = nullptr;
std::default_random_engine Game::random_engine(time(0));

Game* Game::getInstance(){
    if(!instance){
        instance = new Game;
    }
    return instance;
}