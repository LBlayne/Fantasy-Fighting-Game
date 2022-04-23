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

		cout << "Attack (y/n)" << endl;
		std::cin >> in;

		if (in == "y") {
			
			//villian & hero stats
			cout << "enemy health = " << villian.getHealth() << endl;
			cout << "hero health = " << hero.getHealth() << endl;

		
			villian.setHealth(villian.getHealth() - w->getDamage()); //hero attacks

			cout << "\n\n The villian is attacking \n" << endl; //villian attacks
			hero.setHealth(hero.getHealth() - vDamage);

			cout << "enemy health = " << villian.getHealth() << endl;
			cout << "hero health = " << hero.getHealth() << endl;
		}

		// "no" means villian attacks
		else if (in == "n") {

			
			cout << "\n\n The villian is attacking" << endl;
			hero.setHealth(hero.getHealth() - vDamage);

			cout << "enemy health = " << villian.getHealth() << endl;
			cout << "hero health = " << hero.getHealth() << endl;
		}

		else { 
			//user is a little slow
			cout << "you can only enter y/n" << endl;
		}
	}
	
	cout << "\n\n\n You defeated the enemy!" << endl;
}