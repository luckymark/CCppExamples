//
//  Texture.h
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Texture__
#define __Fighters__Texture__

#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"

class Texture{
public:
    static sf::Texture HERO;
    static sf::Texture ENEMY;
    static sf::Texture BULLET;
    
    static void load();
};

#endif /* defined(__Fighters__Texture__) */
