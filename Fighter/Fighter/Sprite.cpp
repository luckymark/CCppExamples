#include "Sprite.h"
#include "Sky.h"

void Sprite::draw(){
    Sky::getInstance()->getWindow()->draw(*this);
}

Rect Sprite::getRect(){
    Rect r;
    r.x=this->getPosition().x;
    r.y=this->getPosition().y;
    r.w=this->getLocalBounds().width;
    r.h=this->getLocalBounds().height;
    
    return r;
}