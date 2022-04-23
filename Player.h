
#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Weapon.h"
#include <string>

using std::string;

class Player : public Character {
private: 
	string cName;
	int cHealth;
public:

	Player();
	Player(string, int);

	void setName(string);
	void setHealth(int);

	string getName() { return cName; };
	int getHealth() { return cHealth; };

};

Player::Player()
{
	cName = "";
	cHealth = 0;
}

Player::Player(string n, int h)
{
	cName = n;
	cHealth = h;
}

void Player::setName(string n)
{
	cName = n;
}

void Player::setHealth(int h)
{
	cHealth = h;
}

#endif