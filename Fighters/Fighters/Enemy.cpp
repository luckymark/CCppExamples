//
//  Enemy.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//



#include "ResourcePath.hpp"

#include "Enemy.h"

#include "Sky.h"

Enemy::Enemy(){
    if (!textureHero.loadFromFile(resourcePath() + "image/shoot.png", sf::IntRect(534, 612, 57, 43))) {
        cout<<"load file failed: "<<resourcePath() + "image/shoot.png"<<endl;
    }
    this->setTexture(this->textureHero);
    
    this->setPosition(Sky::getInstance()->randomX(), 20);
    
    this->gun.setOwner(this);
}

void Enemy::heartBeat(){
    this->move(0,10);
}