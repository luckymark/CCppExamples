#include "Plane.h"
#include "Gun.h"

#include "Sky.h"

#include "Bullet.h"

void Gun::fire(){
    sf::Vector2f pos = ((this->owner)->getPosition());
    Bullet* bullet1 = new Bullet(pos.x+15,pos.y+30);
    Sky::getInstance()->add(bullet1);
    Sky::getInstance()->addMyBullet(bullet1);
	Bullet* bullet2 = new Bullet(pos.x+80,pos.y+30);
	Sky::getInstance()->add(bullet2);
	Sky::getInstance()->addMyBullet(bullet2);
}

sf::Vector2f Gun::getPosition(){
    sf::Vector2f ff;
    return ff;//this->owner->getPosition();
}

void Gun::setOwner(Plane * owner){
    this->owner = owner;
}