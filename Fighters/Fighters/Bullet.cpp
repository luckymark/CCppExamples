//
//  Bullet.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Bullet.h"
#include "Texture.h"

Bullet::Bullet(float x,float y){
    this->setTexture(Texture::BULLET);
    
    this->setPosition(x, y);
}

void Bullet::heartBeat(){
    this->move(0,-10);
}
