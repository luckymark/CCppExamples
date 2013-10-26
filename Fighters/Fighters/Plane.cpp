//
//  Plane.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "ResourcePath.hpp"

#include "Plane.h"
#include "Sky.h"

Plane::Plane(){
    if (!textureHero.loadFromFile(resourcePath() + "image/shoot.png", sf::IntRect(0, 99, 102, 126))) {
        cout<<"load file failed: "<<resourcePath() + "image/shoot.png"<<endl;
    }
    this->setTexture(this->textureHero);
    this->setPosition(180, 600);
    
    this->gun.setOwner(this);
}

void Plane::move2left(){
    this->move(-10,0);
}

void Plane::move2right(){
    this->move(10,0);
}

void Plane::fire(){
    this->gun.fire();
}

void Plane::draw(){
    Sky::window.draw(*this);
}