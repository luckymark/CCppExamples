#ifndef __Fighters__Texture__
#define __Fighters__Texture__

#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"

class Texture{
public:
    static sf::Texture HERO;
    
    static sf::Texture ENEMY;
    static sf::Texture ENEMY_DOWN_1;
    static sf::Texture ENEMY_DOWN_2;
    static sf::Texture ENEMY_DOWN_3;
    static sf::Texture ENEMY_DOWN_4;
    
    static sf::Texture BULLET;
    
    static sf::Texture SKY;
	static sf::Texture OVER;
    
    static void load();
};

#endif /* defined(__Fighters__Texture__) */
