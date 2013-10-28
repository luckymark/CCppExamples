//
//  Bullet.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Bullet__
#define __Fighters__Bullet__

#include "Sprite.h"

class Bullet:public Sprite{
public:
    Bullet(float x,float y);
    void heartBeat();
};

#endif /* defined(__Fighters__Bullet__) */
