//
//  Enemy.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Enemy.h"

#include "Sky.h"
#include "Texture.h"

Enemy::Enemy(){
    this->setTexture(Texture::ENEMY);
    
    this->setPosition(Sky::getInstance()->randomX(), 20);
    
    this->gun.setOwner(this);
}

void Enemy::heartBeat(){
    this->move(0,10);
}