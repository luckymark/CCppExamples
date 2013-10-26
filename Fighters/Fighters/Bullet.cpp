//
//  Bullet.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//


#include "ResourcePath.hpp"

#include "Bullet.h"
#include "Sky.h"

Bullet::Bullet(float x,float y){
    if (!texture.loadFromFile(resourcePath() + "image/shoot.png", sf::IntRect(1004, 987, 9, 21))) {
        cout<<"load file failed: "<<resourcePath() + "image/shoot.png"<<endl;
    }
    this->setTexture(this->texture);
    this->setPosition(x, y);
}

void Bullet::heartBeat(){
    this->move(0,-10);
}

void Bullet::draw(){
    Sky::window.draw(*this);
}