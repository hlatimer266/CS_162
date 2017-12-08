/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for Menu class
**************************************************************/

#include<iostream>
#include<string>
#include"Menu.h"
#include"Character.h"
#include"Barbarian.h"
#include "DynIntStack.h"
#include"HarryPotter.h"
#include "Vampire.h"
#include "BlueMen.h"
#include "Medusa.h"
#include<limits>

Menu::Menu() {};

void Menu::game()
{
	std::string playOrQuit = "p";
	while (playOrQuit != "q") {

		//Character selection menu
		int user_response;
		int user_response2;
		std::string name;

		std::cin.clear();
		std::cout << "Choose the number of memebers for each team (between 1 and 6)!" << std::endl;
		std::cin >> user_response;
		checkNum(&user_response);

		for (int i = 0; i < user_response; i++) {
			std::cout << "Player 1 choose your team!" << std::endl;
			std::cout << "Enter 1 to use the Barbarian" << std::endl;
			std::cout << "Enter 2 to use the Vampire" << std::endl;
			std::cout << "Enter 3 to use Blue Men" << std::endl;
			std::cout << "Enter 4 to use Harry Potter" << std::endl;
			std::cout << "Enter 5 to use Medusa" << std::endl;
			std::cout << "Enter 6 to exit " << std::endl;
			std::cin >> user_response2;

			checkNum(&user_response2);
			std::cout << "please enter a name for your fighter!" << std::endl;
			std::cin >> name;

			if (user_response2 == 1) {
				c1 = new Barbarian(name);
				stack1.push(c1);
				c1 = NULL;
				delete c1;
			}
			else if (user_response2 == 2)
			{
				c1 = new Vampire(name);
				stack1.push(c1);
				c1 = NULL;
				delete c1;
			}
				
			else if (user_response2 == 3) {
				c1 = new BlueMen(name);
				stack1.push(c1);
				c1 = NULL;
				delete c1;
			}
			else if (user_response2 == 4)
			{
				c1 = new HarryPotter(name);
				stack1.push(c1);
				c1 = NULL;
				delete c1;
			}
			else if (user_response2 == 5)
			{
				c1 = new Medusa(name);
				stack1.push(c1);
				c1 = NULL;
				delete c1;
			}
			else if (user_response == 6)
				exit(0);
			std::cin.clear();
		}
		std::cin.clear();

		//Character selection menu
		
		
		for (int i = 0; i < user_response; i++) {
			std::cout << "Player 2 choose your team" << std::endl;
			std::cout << "Enter 1 to use the Barbarian" << std::endl;
			std::cout << "Enter 2 to use the Vampire" << std::endl;
			std::cout << "Enter 3 to use Blue Men" << std::endl;
			std::cout << "Enter 4 to use Harry Potter" << std::endl;
			std::cout << "Enter 5 to use Medusa" << std::endl;
			std::cout << "Enter 6 to exit " << std::endl;
			std::cin >> user_response2;

			checkNum(&user_response2);
			std::cout << "please enter a name for your fighter!" << std::endl;
			std::cin >> name;
			if (user_response2 == 1) {
				c2 = new Barbarian(name);
				stack2.push(c2);
				c2 = NULL;
				delete c2;
			}
			else if (user_response2 == 2)
			{
				c2 = new Vampire(name);
				stack2.push(c2);
				c2 = NULL;
				delete c2;
			}
			else if (user_response2 == 3)
			{
				c2 = new BlueMen(name);
				stack2.push(c2);
				c2 = NULL;
				delete c2;
			}
			
			else if (user_response2 == 4)
			{
				c2 = new HarryPotter(name);
				stack2.push(c2);
				c2 = NULL;
				delete c2;
			}
			else if (user_response2 == 5)
			{
				c2 = new Medusa(name);
				stack2.push(c2);
				c2 = NULL;
				delete c2;
			}
			else if (user_response2 == 6)
				exit(0);
			std::cin.clear();
		}

		
		//Attack function between two characters	
		playerattack();
			
		
		//prompt user to play again or quit
		std::cin.clear();
		std::cout << "Plase type p to play again or q to quit" << std::endl;
		std::cin >> playOrQuit;
		bool valid_3 = false;

		while (valid_3 == false) {
			std::cin.clear();
			if (playOrQuit.length() > 1) {
				valid_3 = false;
				std::cin.clear();
				std::cout << "Please enter a either p or q " << std::endl;
				std::cin >> playOrQuit;
			}
			else if (!isalpha(playOrQuit.at(0))) {
				valid_3 = false;
				std::cin.clear();
				std::cout << "Please enter a either p or q  " << std::endl;
				std::cin >> playOrQuit;
			}
			else
			{
				char c = tolower(playOrQuit.at(0));
				if (c == 'p' || c == 'q')
					valid_3 = true;
				else {
					valid_3 = false;
					std::cin.clear();
					std::cout << "Please enter a either p or q  " << std::endl;
					std::cin >> playOrQuit;
				}
			}
		}

		
	}



}

void Menu::checkNum(int* resp) {

	//input validation for character menu

	while (*resp < 1 || *resp > 7 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number between 1-6 " << std::endl;

		std::cin >> *resp;
	}



}

void Menu::playerattack()
{
	
	stack1.pop(c3);

	stack2.pop(c4);

	int deathcountp1 = 0;
	int deathcountp2 = 0;
		
	while (c3->getStrength() > 0 && c4->getStrength() > 0) {
		if (c3->getStrength() <= 0) {
			if (stack1.isEmpty() == true)
				std::cout << "Player 1 has no more fighters!" << std::endl;
			else {
				deathstack.push(c3);
				stack1.pop(c3);
				std::cin.clear();
				deathcountp1++;
				
			}


		}
		else if (c4->getStrength() <= 0)
		{
			if (stack2.isEmpty() == true)
				std::cout << "Player 2 has no more fighters!" << std::endl;
			else {
				deathstack.push(c4);
				stack2.pop(c4);
				deathcountp2++;
			}

		}

		else
		{

			std::cout << "Player 1 Attack: ";
			c4->defense(c3->attack(), c3->getMedusa());
			std::cout << " " << std::endl;
			if (c4->getStrength() <= 0)
			{
				if (stack2.isEmpty() == true) {
					std::cout << "Player 2 has died!" << std::endl;
					deathcountp2++;
				}
				else {
					deathstack.push(c4);
					stack2.pop(c4);
					deathcountp2++;
				}
			}
			else {
				std::cout << "Player 2 Attack ";
				c3->defense(c4->attack(), c4->getMedusa());
				if (c3->getStrength() <= 0)
				{
					if (stack1.isEmpty() == true) {
						std::cout << "Player 1 has died!" << std::endl;
						deathcountp1++;
					}
					else {
						deathstack.push(c3);
						stack1.pop(c3);
						deathcountp1++;
					}
				}

				std::cout << " " << std::endl;
			}
		}
	}

	if (deathcountp1 < deathcountp2)
		std::cout << "Player 2 has no more figthers.Player 1 is the winner!" << std::endl;
	else 
		std::cout << "Player 1 has no more fighters. Player 2 is the winner!" << std::endl;

	
	
}

Menu::~Menu()
{
	delete c1;
	delete c2;

}