#include "Bullet.h"
#include "Texture.h"

Bullet::Bullet(float x,float y){
    this->setTexture(Texture::BULLET);
    
    this->setPosition(x, y);
}

void Bullet::heartBeat(){
    this->move(0,-10);
}
