//
//  Sky.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Sky__
#define __Fighters__Sky__

#include <SFML/Graphics.hpp>

#include "Sprite.h"
#include "Enemy.h"
#include "Bullet.h"

#include "Rect.h"

#include <random>
#include <ctime>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Sky{
public:
    static Sky* getInstance();
    
    sf::RenderWindow* getWindow(){
        return this->window;
    }
    void add(Sprite *);
    
    void addEnemy(Enemy*);
        
    void addMyBullet(Bullet *);
    
    void refresh();
    unsigned randomX();
private:
    Sky();
    
    sf::RenderWindow* window;
    unordered_set<Sprite * > sprites;
    unordered_set<Enemy * > enemies;
    unordered_set<Bullet * > myBullets;
    
    sf::Sprite* background=NULL;
    
    static Sky* instance;
    
    void sweep();
    bool isCollision(const Rect& r1,const Rect& r2);
    void createEnemies();
    
    uniform_int_distribution<unsigned> u;
    default_random_engine e;
};

#endif /* defined(__Fighters__Sky__) */
