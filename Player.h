
#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include <string>

using std::string;

class Player : public Character {
private: 
	string cName;
	int cHealth;
public:

	Player();
	Player(string, int);

	void getName();
	void getHealth();
};

Player::Player()
{

}

Player::Player(string, int)
{

}

inline void Player::getName()
{
}

inline void Player::getHealth()
{
}

#endif