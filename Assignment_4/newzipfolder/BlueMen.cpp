/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/28/2017
* Description: Implementation file for BlueMen class
**************************************************************/
#include"Barbarian.h"
#include"Character.h"
#include "BlueMen.h"
#include<random>
#include<iostream>
#include <chrono>


BlueMen::BlueMen(std::string n1) : Character()
{
	armor = 3;
	strength = 12;
	name = n1;
}


int BlueMen::attack()
{

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);


	std::uniform_int_distribution<int> loaded_roll(1, 10);

	int die1 = loaded_roll(generator);
	int die2 = loaded_roll(generator);

	std::cout << name <<" attack pts = " << die1 + die2 << std::endl;
	return die1 + die2;
}

void BlueMen::defense(int usrAttack, bool isM)
{

	if (isM == true && usrAttack == 12)
	{
		std::cout << "Medusa gave a knock out blow!" << std::endl;
		std::cout << name << " are dead!" << std::endl;
		strength = 0;

	}
	else {
		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		std::default_random_engine generator(seed);

		std::uniform_int_distribution<int> loaded_roll(1, 6);

		 die1 = loaded_roll(generator);
		 die2 = loaded_roll(generator);
		 die3 = loaded_roll(generator);
		int numDie = 3;
		int damage;
		int dieArray[3] = { die1,die2,die3 };
		int sumDamge = 0;
		std::cout << name << " Men armor = " << armor << std::endl;

		usrAttack -= armor;

		if (numDie == 0)
			numDie = 0;
		else if ((usrAttack) >= 4)
		{
			int die_sub;
			int count = usrAttack;

			std::cout << name << " lose 1 defense die!" << std::endl;
			dieArray[numDie - 1] = { 0 };
			numDie--;
			count -= 4;

			while (count > 0)
			{

				if (count % 4 != 0)
					count--;

				else if (count % 4 == 0)
				{
					std::cout << name <<" lose another defense die!" << std::endl;
					dieArray[numDie - 1] = { 0 };
					numDie--;
					count -= 4;

				}
				else
					std::cout << "Zero defense die left!" << std::endl;

			}


		}

		for (int i = 0; i < 3; i++)
		{

			sumDamge += dieArray[i];

		}
		std::cout << name <<" defense pts = " << sumDamge << std::endl;
		damage = usrAttack - sumDamge - armor;

		if (damage <= 0)
			damage = 0;

		std::cout << "Damge taken by "<< name << " = " << damage << std::endl;
		strength -= damage;
		std::cout << "strength left in " << name << " = " << strength << std::endl;

		if (strength < 0)
			std::cout << name << " are dead!" << std::endl;
	}
}