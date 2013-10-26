
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
    
    
    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "image/shoot.png")) {
        return EXIT_FAILURE;
    }
    Sky::window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "image/background.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);
    
    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "font/STHeiti Light.ttc")) {
        return EXIT_FAILURE;
    }
    sf::Text text(L"飞机大战", font, 50);
    text.setColor(sf::Color::Black);
    
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "sound/game_music.ogg")) {
        return EXIT_FAILURE;
    }
    
    // Play the music
    music.play();
    
    // my plane: the Hero!
    Plane hero;
    Sky::add(&hero);
    
    // Start the game loop
    while (Sky::window.isOpen())
    {
        // Process events
        sf::Event event;
        while (Sky::window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                Sky::window.close();
            }
            
            // Escape pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                Sky::window.close();
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
        
        Sky::refresh();
    }
    
    return EXIT_SUCCESS;
}
