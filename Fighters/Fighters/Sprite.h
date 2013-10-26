//
//  Sprite.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Sprite__
#define __Fighters__Sprite__

#include <iostream>

#include <SFML/Graphics.hpp>

class Sprite:public sf::Sprite{
public:
    virtual void heartBeat()=0;
    void draw();
};

#endif /* defined(__Fighters__Sprite__) */
