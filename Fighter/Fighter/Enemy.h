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
	double speed;
};

#endif /* defined(__Fighters__Enemy__) */
