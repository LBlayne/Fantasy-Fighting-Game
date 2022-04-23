
#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:

	std::string name;
	int damage;

	Weapon* myWeapons[5];
	int numWeapons;

public:
	
	Weapon();
	Weapon(std::string, int);

	std::string getWeapon() { return name; };
	int getDamage() { return damage; };

	void setName(std::string);
	void setDamage(int);

	void showInv();

};

Weapon::Weapon() 
{
	name = "";
	damage = 0;
	
}

Weapon::Weapon(std::string n, int d)
{
	name = n;
	damage = d;
}

void Weapon::setName(std::string n)
{
	name = n;
}

void Weapon::setDamage(int d)
{
	damage = d;
}

void Weapon::showInv()
{
	for (int i = 0; i < numWeapons; i++) {
		std::cout << myWeapons[i]->getWeapon() << " " << myWeapons[i]->getDamage() << std::endl;
	}
}
#endif