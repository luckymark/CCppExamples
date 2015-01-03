#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "ResourcePath.hpp"

#include "Sky.h"
#include "Texture.h"
#include "Hero.h"
#include "Sound.h"
int main()
{
	int num = 0;
    Texture::load();
    Sound::load();
    
    Sky* sky = Sky::getInstance();
    sf::RenderWindow* window = sky->getWindow();
    
    Sound::BACK_GROUND.play();
    Hero hero;
    sky->add(&hero);
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window->close();
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
                hero.move2left();
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
                hero.move2right();
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up) {
				hero.move2up();
            }

			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down) {
				hero.move2down();
			}
        }
        if (++num >= 30){
			hero.fire();
			num = 0;
		}
        sky->refresh();
		
    }
    
    return EXIT_SUCCESS;
}
