#include "Enemy.h"
#include "Texture.h"
#include "Sound.h"
#include "Game.h"
#include <random>
#include <iostream>
using namespace std;

Enemy::Enemy(){
    this->setTexture(Texture::ENEMY);
    
    uniform_int_distribution<unsigned> u(0,440);
	uniform_int_distribution<unsigned> v(0,1);
    std::default_random_engine random_engine;
    this->setPosition(u(Game::random_engine), 20);
	this->speed = 0.5+(double)(v(Game::random_engine)/1.5);
    this->gun.setOwner(this);
}

void Enemy::heartBeat(){
	float y;
    switch(this->state){
        case 0:
			y=this->getPosition().y;
			if (y >= 700) this->state = 4;
				else this->move(0,this->speed);
            break;
        case 1:
            this->setTexture(Texture::ENEMY_DOWN_2);
            this->state++;
            break;
        case 2:
            this->setTexture(Texture::ENEMY_DOWN_3);
            this->state++;
            break;
        case 3:
            this->setTexture(Texture::ENEMY_DOWN_4);
            this->state++;
            break;
        default:;
    }
}

void Enemy::hit(){
    this->state = 1;
    this->setTexture(Texture::ENEMY_DOWN_1);
    Sound::ENEMY_DOWN.play();
}

bool Enemy::needClear(){
    return this->state == 4;
}

bool Enemy::isDead(){
    return this->state != 0;
}