//
//  Sky.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Sky.h"

sf::RenderWindow Sky::window(sf::VideoMode(480, 800), L"飞机大战");

vector<Sprite * > Sky::sprites;

void Sky::add(Sprite* sprite){
    sprites.push_back(sprite);
}

void Sky::del(Sprite* sprite){
    //TODO
}

void Sky::refresh(){
    // Clear screen
    Sky::window.clear();
    
    // Draw the sprite
    for(auto &sprite : Sky::sprites){
        sprite->heartBeat();
        Sky::window.draw(*sprite);
    }
    
    // Update the window
    Sky::window.display();
}