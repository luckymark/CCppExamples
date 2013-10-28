//
//  Sky.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "ResourcePath.hpp"

#include "Sky.h"
#include "Enemy.h"

#include "Texture.h"

Sky* Sky::instance = nullptr;

Sky::Sky(){
    this->window = new sf::RenderWindow(sf::VideoMode(480, 800), L"飞机大战");
    
    // Set the Icon
    sf::Image icon;
    if (icon.loadFromFile(resourcePath() + "image/shoot.png")) {
        this->window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    }
    
    // create the background
    this->background = new sf::Sprite(Texture::SKY);
}

void Sky::add(Sprite* sprite){
    this->sprites.insert(sprite);
}

void Sky::addMyBullet(Bullet * bullet){
    this->myBullets.insert(bullet);
}

void Sky::refresh(){
    this->window->draw(*this->background);
    
    this->clear();
    
    this->collision();
    
    this->createEnemies();
    
    // Draw the sprite
    for(auto &sprite : this->sprites){
        sprite->heartBeat();
        this->window->draw(*sprite);
    }
    
    // Update the window
    this->window->display();
}

void Sky::clear(){
    for(auto it_enemy= this->enemies.begin();it_enemy!=this->enemies.end();){
        if((*it_enemy)->needClear()){
            delete *it_enemy;
            this->sprites.erase(*it_enemy);
            
            it_enemy = (this->enemies).erase(it_enemy);
        }else{
            ++it_enemy;
        }
    }
}
void Sky::collision(){
    for(auto it_enemy= this->enemies.begin();it_enemy!=this->enemies.end();++it_enemy){
        if((*it_enemy)->isDead()) continue;
        
        for(auto it_bullet= this->myBullets.begin();it_bullet!=this->myBullets.end();++it_bullet){
            if(this->isCollision((*it_enemy)->getRect(), (*it_bullet)->getRect())){
                delete *it_bullet;
                this->sprites.erase(*it_bullet);
                (this->myBullets).erase(it_bullet);
                
                (*it_enemy)->hit();
                break;
            }
        }
    }
}
bool Sky::isCollision(const Rect& r1,const Rect& r2){
    //TODO 化简表达式
    return (r2.x>=r1.x && r2.x<=(r1.x+r1.w) && r2.y>=r1.y && r2.y<=(r1.y+r1.h))
    || ((r2.x+r2.w)>=r1.x && (r2.x+r2.w)<=(r1.x+r1.w) && r2.y>=r1.y && r2.y<=(r1.y+r1.h))
    || (r2.x>=r1.x && r2.x<=(r1.x+r1.w) && (r2.y+r2.h)>=r1.y && (r2.y+r2.h)<=(r1.y+r1.h))
    || ((r2.x+r2.w)>=r1.x && (r2.x+r2.w)<=(r1.x+r1.w) && r2.y>=r1.y && r2.y<=(r1.y+r1.h));
}


void Sky::createEnemies(){
    static int count=0;
    
    //每10个GameFrame产生一个敌机
    if(++count>=10){
        Enemy* enemy = new Enemy;
        this->sprites.insert(enemy);
        this->enemies.insert(enemy);
        
        count = 0;
    }
    
}

Sky* Sky::getInstance(){
    if(!instance){
        instance = new Sky;
    }
    return instance;
}