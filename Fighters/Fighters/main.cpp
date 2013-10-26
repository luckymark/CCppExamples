
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

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(480, 800), L"飞机大战");

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "image/shoot.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

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
    sf::Texture textureHero;
    if (!textureHero.loadFromFile(resourcePath() + "image/shoot.png", sf::IntRect(0, 99, 102, 126))) {
        return EXIT_FAILURE;
    }
    sf::Sprite spriteHero(textureHero);


    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);
        
        // Draw hero
        spriteHero.setPosition(180, 600);
        window.draw(spriteHero);


        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
