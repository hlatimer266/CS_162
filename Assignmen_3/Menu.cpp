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
		std::cin.clear();
		std::cout << "Player 1, choose your character to battle with!" << std::endl;
		std::cout << "Enter 1 to use the Barbarian" << std::endl;
		std::cout << "Enter 2 to use the Vampire" << std::endl;
		std::cout << "Enter 3 to use Blue Men" << std::endl;
		std::cout << "Enter 4 to use Harry Potter" << std::endl;
		std::cout << "Enter 5 to use Medusa" << std::endl;
		std::cout << "Enter 6 to exit " << std::endl;
		std::cin >> user_response;

		checkNum(&user_response);

		if (user_response == 1)
			c1 = new Barbarian;
		else if (user_response == 2)
			c1 = new Vampire;
		else if (user_response == 3)
			c1 = new BlueMen;
		else if (user_response == 4)
			c1 = new HarryPotter;
		else if (user_response == 5)
			c1 = new Medusa;
		else if (user_response == 6)
			exit(0);

		std::cin.clear();
		std::cout << "Player 2, choose your character to battle with!" << std::endl;
		std::cout << "Enter 1 to use the Barbarian" << std::endl;
		std::cout << "Enter 2 to use the Vampire" << std::endl;
		std::cout << "Enter 3 to use Blue Men" << std::endl;
		std::cout << "Enter 4 to use Harry Potter" << std::endl;
		std::cout << "Enter 5 to use Medusa" << std::endl;
		std::cout << "Enter 6 to exit " << std::endl;
		std::cin >> user_response;

		checkNum(&user_response);

		if (user_response == 1)
			c2 = new Barbarian;
		else if (user_response == 2)
			c2 = new Vampire;
		else if (user_response == 3)
			c2 = new BlueMen;
		else if (user_response == 4)
			c2 = new HarryPotter;
		else if (user_response == 5)
			c2 = new Medusa;
		else if (user_response == 6)
			exit(0);

		
		//Attack function between two characters	
		playerattack(c1, c2);
			
		
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

void Menu::playerattack(Character*& c1, Character*& c2)
{

		
	while (c1->getStrength() > 0 && c2->getStrength() > 0) {
		if (c1->getStrength() <= 0) {
			std::cout << "Player 1 has lost!" << std::endl;
			std::cin.clear();


		}
		else if (c2->getStrength() <= 0)
		{
			std::cout << "Player 2 has lost!" << std::endl;

		}

		else
		{

			std::cout << "Player 1 Attack: ";
			c2->defense(c1->attack(), c1->getMedusa());
			std::cout << " " << std::endl;
			if (c2->getStrength() <= 0)
			{
				std::cout << "Player 2 has died!" << std::endl;

			}
			else {
				std::cout << "Player 2 Attack ";
				c1->defense(c2->attack(), c2->getMedusa());
				if (c1->getStrength() <= 0)
				{
					std::cout << "Player 1 has died!" << std::endl;

				}

				std::cout << " " << std::endl;
			}
		}

	}

		
	
}

Menu::~Menu()
{
	delete c1;
	delete c2;

}