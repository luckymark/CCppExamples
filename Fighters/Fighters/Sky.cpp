//
//  Sky.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "ResourcePath.hpp"

#include "Sky.h"
#include "Enemy.h"

Sky* Sky::instance = NULL;

Sky::Sky():u(0,480),e(time(0)){
    this->window = new sf::RenderWindow(sf::VideoMode(480, 800), L"飞机大战");
    
    // Set the Icon
    sf::Image icon;
    if (icon.loadFromFile(resourcePath() + "image/shoot.png")) {
        this->window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    }
    
    // create the background
    sf::Texture* texture = new sf::Texture;
    if (texture->loadFromFile(resourcePath() + "image/background.png")) {
        this->background = new sf::Sprite(*texture);
    }
}

void Sky::add(Sprite* sprite){
    this->sprites.push_back(sprite);
}

void Sky::del(Sprite* sprite){
    //TODO
}

void Sky::refresh(){
    this->window->draw(*this->background);
    
    this->createEnemies();
    
    // Draw the sprite
    for(auto &sprite : this->sprites){
        sprite->heartBeat();
        this->window->draw(*sprite);
    }
    
    // Update the window
    this->window->display();
}

void Sky::createEnemies(){
    static int count=0;
    
    //每10个GameFrame产生一个敌机
    if(++count>=10){
        this->sprites.push_back(new Enemy());
        count = 0;
    }
    
}

unsigned Sky::randomX(){
    return this->u(this->e);
}

Sky* Sky::getInstance(){
    if(!instance){
        instance = new Sky;
    }
    return instance;
}