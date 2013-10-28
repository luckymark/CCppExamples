//
//  Sound.h
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Sound__
#define __Fighters__Sound__

#include <SFML/Audio.hpp>
#include "ResourcePath.hpp"

class Sound{
public:
    static sf::Music BACK_GROUND;
    static sf::Music ENEMY_DOWN;
    
    static void load();
};

#endif /* defined(__Fighters__Sound__) */
