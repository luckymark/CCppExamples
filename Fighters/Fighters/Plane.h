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

#include <iostream>
using std::cout;
using std::endl;

class Plane{
public:
    Plane(sf::RenderWindow& window);
    void move2left();
    void move2right();
    void draw();
private:
    sf::Texture textureHero;
    sf::Sprite spriteHero;
    sf::RenderWindow& window;
};

#endif /* defined(__Fighters__Plane__) */
