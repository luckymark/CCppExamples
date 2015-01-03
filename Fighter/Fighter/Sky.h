#ifndef __Fighters__Sky__
#define __Fighters__Sky__

#include <SFML/Graphics.hpp>
#include "Sprite.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Hero.h"

#include "Rect.h"

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Sky:private Hero{
public:
    static Sky* getInstance();
    
    sf::RenderWindow* getWindow(){
        return this->window;
    }
    void add(Sprite *);
        
    void addMyBullet(Bullet *);
    
    void refresh();
	void isover();
private:
    Sky();
    
    sf::RenderWindow* window;
    unordered_set<Sprite * > sprites;
    unordered_set<Enemy * > enemies;
    unordered_set<Bullet * > myBullets;
    
    sf::Sprite* background=nullptr;
	sf::Sprite* gameover=nullptr;
    
    static Sky* instance;
    
    void clear();
    void collision();
    bool isCollision(const Rect& r1,const Rect& r2);
    void createEnemies();
	long turn,level;
};

#endif /* defined(__Fighters__Sky__) */
