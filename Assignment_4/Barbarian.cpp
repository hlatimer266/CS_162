/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for Character class
**************************************************************/
#include"Barbarian.h"
#include"Character.h"
#include<random>
#include<iostream>
#include <ctime>
#include<cstdlib>
#include <chrono>
#include <functional>
#include <array>
#include <map>

Barbarian::Barbarian(std::string n1) : Character()
{
	armor = 0;
	strength = 12;
	name = n1;
}
Barbarian::Barbarian(int arm, int strg, std::string n1):Character(arm, strg, n1)
{
	
}

int Barbarian::attack()
{

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);


	std::uniform_int_distribution<int> loaded_roll(1, 6);

	int die1 = loaded_roll(generator);
	int die2 = loaded_roll(generator);

	std::cout << name << " attack pts = " << die1 + die2 << std::endl;
	return die1 + die2;
}

void Barbarian::defense(int usrAttack, bool isM)
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

		int die1 = loaded_roll(generator);
		int die2 = loaded_roll(generator);
		int damage;
		std::cout << name << " armor = " << armor << std::endl;
		std::cout << name << " defense pts = " << die1 + die2 << std::endl;
		damage = usrAttack - (die1 + die2) - armor;

		if (damage <= 0)
			damage = 0;
		
		std::cout << "Damge taken by " << name << " = " << damage << std::endl;
		strength -= damage;
		std::cout << "strength left in the " << name <<  "="  << strength << std::endl;

		if (strength < 0)
			std::cout << name << " is dead!" << std::endl;
	}
}
