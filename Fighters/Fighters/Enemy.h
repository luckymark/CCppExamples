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

#include <iostream>


class Enemy:public Plane{
public:
    Enemy();
    void heartBeat();
};

#endif /* defined(__Fighters__Enemy__) */
