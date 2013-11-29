#include "ResourcePath.hpp"

#include "Sky.h"
#include "Enemy.h"
#include "Hero.h"
#include "Texture.h"

Sky* Sky::instance = nullptr;

Sky::Sky(){
    this->window = new sf::RenderWindow(sf::VideoMode(480, 800), L"飞机大战");
    
    sf::Image icon;
    if (icon.loadFromFile(resourcePath() + "image\\shoot.png")) {
        this->window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    }
    
    this->background = new sf::Sprite(Texture::SKY);
	this->gameover = new sf::Sprite(Texture::OVER);
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
	this->isover();
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
void Sky::isover(){
	for (auto it_enemy = this->enemies.begin(); it_enemy != this->enemies.end(); ++it_enemy){
		if (this->isCollision((*it_enemy)->getRect(), Position())){
			this->window->draw(*this->gameover);
			this->window->display();
			for (int i = 0; i <= 1000000000; i++){}
//			system("pasuse");
			exit(0);
		}
	}
}
bool Sky::isCollision(const Rect& r1,const Rect& r2){
    return (r2.x>=r1.x && r2.x<=(r1.x+r1.w) && r2.y>=r1.y && r2.y<=(r1.y+r1.h))
    || ((r2.x+r2.w)>=r1.x && (r2.x+r2.w)<=(r1.x+r1.w) && r2.y>=r1.y && r2.y<=(r1.y+r1.h))
    || (r2.x>=r1.x && r2.x<=(r1.x+r1.w) && (r2.y+r2.h)>=r1.y && (r2.y+r2.h)<=(r1.y+r1.h))
    || ((r2.x+r2.w)>=r1.x && (r2.x+r2.w)<=(r1.x+r1.w) && r2.y>=r1.y && r2.y<=(r1.y+r1.h));
}


void Sky::createEnemies(){
    static int count=0;
	int p = 0;
	if ((150 - level) > 50) p = (150 - level); 
	else p = 50;
    if(++count>=p){
		turn++;
        Enemy* enemy = new Enemy;
        this->sprites.insert(enemy);
        this->enemies.insert(enemy);
        
        count = 0;
    }
	if (turn >= 10){
		turn = 0;
		level++;
	}
}

Sky* Sky::getInstance(){
    if(!instance){
        instance = new Sky;
    }
    return instance;
}