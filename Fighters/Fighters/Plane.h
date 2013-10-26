//
//  Plane.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Plane__
#define __Fighters__Plane__

#include <SFML/Graphics.hpp>

#include "Gun.h"
#include "Sprite.h"

#include <iostream>
using std::cout;
using std::endl;

class Plane:public Sprite{
public:
    Plane();
    void move2left();
    void move2right();
    void fire();
    void heartBeat(){};
private:
    sf::Texture textureHero;
    
    Gun gun;
};

#endif /* defined(__Fighters__Plane__) */
