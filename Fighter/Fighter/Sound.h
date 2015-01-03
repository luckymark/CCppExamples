
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
