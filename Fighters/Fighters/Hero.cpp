//
//  Hero.cpp
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Hero.h"
#include "Texture.h"

Hero::Hero(){
    this->setTexture(Texture::HERO);
    
    this->setPosition(180, 600);
    
    this->gun.setOwner(this);
}

void Hero::move2left(){
    this->move(-10,0);
}

void Hero::move2right(){
    this->move(10,0);
}

