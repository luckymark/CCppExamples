#include "Texture.h"

sf::Texture Texture::HERO;

sf::Texture Texture::ENEMY;
sf::Texture Texture::ENEMY_DOWN_1;
sf::Texture Texture::ENEMY_DOWN_2;
sf::Texture Texture::ENEMY_DOWN_3;
sf::Texture Texture::ENEMY_DOWN_4;

sf::Texture Texture::BULLET;

sf::Texture Texture::SKY;
sf::Texture Texture::OVER;

void Texture::load(){
    std::string path = resourcePath() + "image\\shoot.png";
    
    HERO.loadFromFile(path, sf::IntRect(0, 99, 102, 126));
    
    ENEMY.loadFromFile(path, sf::IntRect(534, 612, 57, 43));
    ENEMY_DOWN_1.loadFromFile(path, sf::IntRect(267, 347, 57, 51));
    ENEMY_DOWN_2.loadFromFile(path, sf::IntRect(873, 697, 57, 51));
    ENEMY_DOWN_3.loadFromFile(path, sf::IntRect(267, 296, 57, 51));
    ENEMY_DOWN_4.loadFromFile(path, sf::IntRect(930, 697, 57, 51));
    
    BULLET.loadFromFile(path, sf::IntRect(1004, 987, 9, 21));
    
    SKY.loadFromFile(resourcePath() + "image\\background.png");
	OVER.loadFromFile(resourcePath() + "image\\gameover.png");
}
