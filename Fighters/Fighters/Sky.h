//
//  Sky.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Sky__
#define __Fighters__Sky__

#include <SFML/Graphics.hpp>

#include "Sprite.h"

#include <iostream>
#include <vector>
using namespace std;

class Sky{
public:
    static sf::RenderWindow window;
    static void add(Sprite *);
    static void del(Sprite *);
    static void refresh();
private:
    static vector<Sprite * > sprites;
};

#endif /* defined(__Fighters__Sky__) */
