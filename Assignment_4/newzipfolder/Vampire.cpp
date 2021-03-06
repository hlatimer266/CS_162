#include"Character.h"
#include"Vampire.h"
#include<random>
#include<iostream>
#include <ctime>
#include<cstdlib>
#include <chrono>
#include <functional>
#include <array>
#include <map>

Vampire::Vampire(std::string n1) : Character()
{
	armor = 1;
	strength = 18;
	name = n1;
}

int Vampire::attack()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);


	std::uniform_int_distribution<int> loaded_roll(1, 12);

	int die1 = loaded_roll(generator);
	

	std::cout << name <<" attack pts = " << die1 << std::endl;
	return die1;
}

void Vampire::defense(int usrAttack, bool isM)
{
	if (isM == true && usrAttack == 12)
	{
		std::cout << "Medusa gave a knock out blow!" << std::endl;
		std::cout << name << " is dead!" << std::endl;
		strength = 0;

	}
	else {
		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		std::default_random_engine generator(seed);

		std::uniform_int_distribution<int> loaded_roll(1, 6);

		int charm;
		charm = rand() % 2;



		int die1 = loaded_roll(generator);

		int damage;
		std::cout << name <<" armor = " << armor << std::endl;
		std::cout << name <<" defense pts = " << die1 << std::endl;
		if (charm == 0)
		{
			std::cout << name <<" has charmed its enemy! He takes no damage!" << std::endl;

		}
		else {
			damage = usrAttack - (die1 ) - armor;

			if (damage <= 0)
				damage = 0;
			
			std::cout << "Damage taken by" << name << " = " << damage << std::endl;
			strength -= damage;
		}

		std::cout << "strength left in the "<< name <<" = " << strength << std::endl;

		if (strength < 0)
			std::cout << name<<" is dead!" << std::endl;
	}
}

