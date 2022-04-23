
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

	void setName(string);
	void setHealth(int);

	string getName() { return eName; };
	int getHealth() { return eHealth; };
};

Enemy::Enemy() 
{
	eName = "";
	eHealth = 0;
}

Enemy::Enemy(string n, int h)
{
	eName = n;
	eHealth = h;
}

void Enemy::setName(string n)
{
	eName = n;
}

void Enemy::setHealth(int h)
{
	eHealth = h;
}

#endif