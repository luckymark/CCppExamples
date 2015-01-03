#ifndef __Fighters__Sprite__
#define __Fighters__Sprite__

#include <iostream>

#include <SFML/Graphics.hpp>
#include "Rect.h"

class Sprite:public sf::Sprite{
public:
    virtual void heartBeat(){};
    void draw();
    Rect getRect();

};

#endif /* defined(__Fighters__Sprite__) */
