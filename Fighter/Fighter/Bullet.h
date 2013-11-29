#ifndef __Fighters__Bullet__
#define __Fighters__Bullet__

#include "Sprite.h"

class Bullet:public Sprite{
public:
    Bullet(float x,float y);
    void heartBeat();
};

#endif /* defined(__Fighters__Bullet__) */
