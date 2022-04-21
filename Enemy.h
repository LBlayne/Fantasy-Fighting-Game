
#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

#include <iostream>
#include <string>

using std::string;

class Enemy : public Character {
private:
	string eName;
	int eHealth;
public:
	Enemy();
	Enemy(string, int);

	void getName();
	void getHealth();
};

Enemy::Enemy() {

}

Enemy::Enemy(string, int)
{
}

void Enemy::getName()
{
}

void Enemy::getHealth()
{
}

#endif