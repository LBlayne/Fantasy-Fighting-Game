
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using std::string;

class Character {
public:
	Character() {};
	virtual string getName() = 0;
	virtual int getHealth() = 0;
};





#endif