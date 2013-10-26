//
//  Bullet.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Bullet__
#define __Fighters__Bullet__

#include <SFML/Graphics.hpp>

#include "Sprite.h"

#include <iostream>
using std::cout;
using std::endl;

class Bullet:public Sprite{
public:
    Bullet(float x,float y);
    void draw();
    void heartBeat();
private:
    sf::Texture texture;
};

#endif /* defined(__Fighters__Bullet__) */
