//Logan Marquez
//Fantasy Fighting Game
//cst-210

#include "Player.h"
#include "Enemy.h"
#include <time.h>
#include <random>

using std::cout;
using std::endl;

int main() {
	srand(time(NULL));

	Player hero = Player("Hero", 20);
	Enemy villian = Enemy("Villian", 20);

	Weapon *w = new Weapon("Sword", 6);

	string in;
	

	while (villian.getHealth() > 0) {

		int vDamage = rand() % 5 + 1;

		cout << "\nAttack (y/n) or press 1 to stop" << endl;
		std::cin >> in;

		if (in == "y") {
			
			//villian & hero stats
			cout << "\n\tenemy health = " << villian.getHealth() << endl;
			cout << "	hero health = " << hero.getHealth() << endl;

			//user Attacks
			cout << "\n you attack for " << w->getDamage() << " damage\n" << endl;
			villian.setHealth(villian.getHealth() - w->getDamage()); 
			cout << "	enemy health = " << villian.getHealth() << endl;
	
			//Enemy Attacks
			cout << "\n\n The villian is attacking for " << vDamage << " damage\n" << endl;
			hero.setHealth(hero.getHealth() - vDamage);
			cout << "	hero health = " << hero.getHealth() << endl;
		}

		// "no" means villian attacks
		else if (in == "n") {

			cout << "\n\n The villian is attacking for " << vDamage << " damage\n" << endl;
			hero.setHealth(hero.getHealth() - vDamage);

			cout << "	hero health = " << hero.getHealth() << endl;
		}

		else if (in == "1")
		{
			cout << "\n this is a battle, you can't just stop!! Get a grip \n" << endl;
		}

		else { 

			//user is a little slow
			cout << "\nyou can only enter y/n" << endl;
		}
	}
	
	cout << "\n\n\n You defeated the enemy!" << endl;
}