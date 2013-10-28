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
#include "Sound.h"

#include <iostream>
using namespace std;

Enemy::Enemy(){
    this->setTexture(Texture::ENEMY);
    
    this->setPosition(Sky::getInstance()->randomX(), 20);
    
    this->gun.setOwner(this);
}

void Enemy::heartBeat(){
    switch(this->state){
        case 0:
            this->move(0,10);
            break;
        case 1:
            this->setTexture(Texture::ENEMY_DOWN_2);
            this->state++;
            break;
        case 2:
            this->setTexture(Texture::ENEMY_DOWN_3);
            this->state++;
            break;
        case 3:
            this->setTexture(Texture::ENEMY_DOWN_4);
            this->state++;
            break;
        default:;
    }
}

void Enemy::hit(){
    this->state = 1;
    this->setTexture(Texture::ENEMY_DOWN_1);
    Sound::ENEMY_DOWN.play();
}

bool Enemy::needClear(){
    return this->state == 4;
}

bool Enemy::isDead(){
    return this->state != 0;
}