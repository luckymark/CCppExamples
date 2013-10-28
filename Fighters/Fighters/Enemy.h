//
//  Enemy.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Enemy__
#define __Fighters__Enemy__

#include "Plane.h"

class Enemy:public Plane{
public:
    Enemy();
    void heartBeat();
    void hit();
    bool needClear();
    bool isDead();
private:
    int state=0;
};

#endif /* defined(__Fighters__Enemy__) */
