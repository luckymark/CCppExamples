//
//  Hero.h
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Hero__
#define __Fighters__Hero__

#include <iostream>

#include "Plane.h"

class Hero:public Plane{
public:
    Hero();
    
    void move2left();
    void move2right();
};

#endif /* defined(__Fighters__Hero__) */
