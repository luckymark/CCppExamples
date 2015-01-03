#ifndef __Fighters__Hero__
#define __Fighters__Hero__

#include <iostream>

#include "Plane.h"

class Hero:public Plane{
public:
    Hero();
	Rect Position();
    void move2left();
    void move2right();
	void move2down();
	void move2up();
};

#endif 
