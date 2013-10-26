//
//  Plane.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "ResourcePath.hpp"

#include "Plane.h"

Plane::Plane(sf::RenderWindow& window):window(window){
    if (!textureHero.loadFromFile(resourcePath() + "image/shoot.png", sf::IntRect(0, 99, 102, 126))) {
        cout<<"load file failed: "<<resourcePath() + "image/shoot.png"<<endl;
    }
    this->spriteHero.setTexture(this->textureHero);
    this->spriteHero.setPosition(180, 600);
}

void Plane::move2left(){
    this->spriteHero.move(-10,0);
}

void Plane::move2right(){
    this->spriteHero.move(10,0);
}

void Plane::draw(){
    this->window.draw(this->spriteHero);
}