
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:

	Weapon* myWeapons[5];
	std::string name;
	int damage;

public:
	
	Weapon();
	Weapon(std::string, int);

	std::string getWeapon() { return name; };
	int getDamage() { return damage; };

	void setName(std::string);
	void setDamage(int);

	void inventory();

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

void Weapon::inventory()
{
	myWeapons[0] = new Weapon("Sword", 6);
	myWeapons[1] = new Weapon("Axe", 5);
	myWeapons[2] = new Weapon("Bow", 7);
	myWeapons[3] = new Weapon("Club", 7);
	myWeapons[4] = new Weapon("Knife", 4);
}

#endif