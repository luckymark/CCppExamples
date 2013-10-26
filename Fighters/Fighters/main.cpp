
//
// Disclamer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resource, use the helper
// method resourcePath() from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you ! Have a look.
#include "ResourcePath.hpp"

#include "Sky.h"
#include "Plane.h"

int main()
{
    Sky* sky = Sky::getInstance();
    sf::RenderWindow* window = sky->getWindow();
    
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "sound/game_music.ogg")) {
        return EXIT_FAILURE;
    }
    
    // Play the music
    music.play();
    
    // my plane: the Hero!
    Plane hero;
    sky->add(&hero);
    
    // Start the game loop
    while (window->isOpen())
    {
        // Process events
        sf::Event event;
        while (window->pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            
            // Escape pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window->close();
            }
            
            // Left Arrow pressed
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
                hero.move2left();
            }
            
            // Right Arrow pressed
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
                hero.move2right();
            }
            
            
            // Up Arrow pressed：hero fire
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up) {
                hero.fire();
            }
        }
        
        sky->refresh();
    }
    
    return EXIT_SUCCESS;
}
