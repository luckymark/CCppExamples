//
//  Sound.cpp
//  Fighters
//
//  Created by luckymark on 13-10-28.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Sound.h"

sf::Music Sound::BACK_GROUND;
sf::Music Sound::ENEMY_DOWN;

void Sound::load(){
    BACK_GROUND.openFromFile(resourcePath() + "sound/game_music.ogg");
    ENEMY_DOWN.openFromFile(resourcePath() + "sound/enemy1_down.ogg");
}
