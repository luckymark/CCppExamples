//
//  Texture.cpp
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Texture.h"

sf::Texture Texture::HERO;
sf::Texture Texture::ENEMY;
sf::Texture Texture::BULLET;

void Texture::load(){
    std::string path = resourcePath() + "image/shoot.png";
    
    HERO.loadFromFile(path, sf::IntRect(0, 99, 102, 126));
    ENEMY.loadFromFile(path, sf::IntRect(534, 612, 57, 43));
    BULLET.loadFromFile(path, sf::IntRect(1004, 987, 9, 21));
}
