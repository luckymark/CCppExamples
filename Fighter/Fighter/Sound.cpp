#include "Sound.h"

sf::Music Sound::BACK_GROUND;
sf::Music Sound::ENEMY_DOWN;

void Sound::load(){
    BACK_GROUND.openFromFile(resourcePath() + "sound\\game_music.ogg");
    ENEMY_DOWN.openFromFile(resourcePath() + "sound\\enemy1_down.ogg");
}
