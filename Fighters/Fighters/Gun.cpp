//
//  Gun.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Gun.h"

#include "Sky.h"

#include "Bullet.h"

void Gun::fire(){
    sf::Vector2f pos = this->owner->getPosition();
    Bullet* bullet = new Bullet(pos.x+15,pos.y+30);
    Sky::getInstance()->add(bullet);
    Sky::getInstance()->addMyBullet(bullet);
}

sf::Vector2f Gun::getPosition(){
    return this->owner->getPosition();
}

void Gun::setOwner(Sprite * owner){
    this->owner = owner;
}