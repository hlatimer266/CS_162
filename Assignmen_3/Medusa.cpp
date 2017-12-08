/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Medusa class
**************************************************************/

#include "Character.h"
#include "Medusa.h"
#include<random>
#include<iostream>
#include <ctime>
#include<cstdlib>
#include <chrono>

Medusa::Medusa() : Character()
{
	armor = 3;
	strength = 8;
	isMedusa = true;
}

int Medusa::attack()
{

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);


	std::uniform_int_distribution<int> loaded_roll(1, 6);

	int die1 = loaded_roll(generator);
	int die2 = loaded_roll(generator);

	std::cout << "Medusa attack pts = " << die1 + die2 << std::endl;
	return die1 + die2;
}

void Medusa::defense(int usrAttack, bool isM)
{
	if (isM == true && usrAttack == 12)
	{
		std::cout << "Medusa gave a knock out blow!" << std::endl;
		std::cout << "Medusa is dead!" << std::endl;
		strength = 0;

	}
	else {

		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		std::default_random_engine generator(seed);

		std::uniform_int_distribution<int> loaded_roll(1, 6);

		int die1 = loaded_roll(generator);
		int die2 = loaded_roll(generator);
		int damage;
		std::cout << "Medusa armor = " << armor << std::endl;
		std::cout << "Medusa defense pts = " << die1 + die2 << std::endl;

		damage = usrAttack - (die1 + die2) - armor;

		if (damage <= 0)
			damage = 0;
		
		std::cout << "Damge taken by Medusa = " << damage << std::endl;
		strength -= damage;
		std::cout << "strength left in the Medusa = " << strength << std::endl;

		if (strength < 0)
			std::cout << "Medusa is dead!" << std::endl;
	}

}