/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for Harry Potter class
**************************************************************/

#include"HarryPotter.h"
#include"Character.h"
#include<random>
#include<iostream>
#include <ctime>
#include<cstdlib>
#include <chrono>
#include <functional>
#include <array>
#include <map>

HarryPotter::HarryPotter() : Character()
{
	armor = 0;
	strength = 10;
}

int HarryPotter::attack()
{

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);


	std::uniform_int_distribution<int> loaded_roll(1, 6);

	int die1 = loaded_roll(generator);
	int die2 = loaded_roll(generator);

	std::cout << "Harry Potter attack pts = " << die1 + die2 << std::endl;
	return die1 + die2;
}

void HarryPotter::defense(int usrAttack, bool isM)
{
	
	if (isM == true && usrAttack == 12)
	{
		std::cout << "Medusa gave a knock out blow!" << std::endl;
		std::cout << "Harry Potter is dead!" << std::endl;
		strength = 0;
		if (times_killed == 0)
		{
			
			std::cout << "But wait, Harry Potter has come back to life!" << std::endl;
			strength = 10;
			 times_killed = 1;
		}


	}
	else {


		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		std::default_random_engine generator(seed);

		std::uniform_int_distribution<int> loaded_roll(1, 6);

		int die1 = loaded_roll(generator);
		int die2 = loaded_roll(generator);
		int damage;
		std::cout << "Harry Potter armor = " << armor << std::endl;
		std::cout << "Harry Potter defense pts = " << die1 + die2 << std::endl;

		damage = usrAttack - (die1 + die2) - armor;

		if (damage <= 0)
			damage = 0;

		std::cout << "Damge taken by Harry Potter = " << damage << std::endl;
		strength -= damage;
		std::cout << "strength left in the Harry Potter = " << strength << std::endl;

		if (strength < 0 && times_killed == 0) {
			std::cout << "Harry Potter is dead, but he has come back to life!" << std::endl;
			strength = 10;
		}
		else if (strength < 0 && times_killed != 0)
			std::cout << "Harry Potter has died (for real this time)!" << std::endl;
	}
}

	
