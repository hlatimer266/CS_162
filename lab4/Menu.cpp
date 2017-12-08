/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/23/2017
* Description: Implementation file for Menu class
**************************************************************/

#include <iostream>
#include <string>
#include "University.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Menu.h"
#include<limits>

Menu::Menu(){};

void Menu::UniOptions()
{
	University uni;
	
	std::string playOrQuit = "p";
	while (playOrQuit != "q") {
		int user_response;
		std::cin.clear();
		std::cout << "Enter 1 to see information about the buildings" << std::endl;
		std::cout << "Enter 2 to see information on students and faculty" << std::endl;
		std::cout << "Enter 3 to choose a person to do work" << std::endl;
		std::cout << "Enter 4 to exit " << std::endl;
		std::cin >> user_response;

		checkNum(&user_response);

		if (user_response == 1)
			uni.getAllBuildNames();
		else if (user_response == 2)
			uni.getAllPeople();
		else if (user_response == 3)
			uni.whoDoesWork();
		else if (user_response == 4) 
			exit(0);
			
		
		
		std::cin.clear();
		std::cout << "type p to play again or q to quit" << std::endl;
		std::cin >> playOrQuit;
		bool valid_2 = false;

		while (valid_2 == false) {
			std::cin.clear();
			if (playOrQuit.length() > 1) {
				valid_2 = false;
				std::cin.clear();
				std::cout << "Please enter a either p or q " << std::endl;
				std::cin >> playOrQuit;
			}
			else if (!isalpha(playOrQuit.at(0))) {
				valid_2 = false;
				std::cin.clear();
				std::cout << "Please enter a either p or q  " << std::endl;
				std::cin >> playOrQuit;
			}
			else
			{
				char c = tolower(playOrQuit.at(0));
				if (c == 'p' || c == 'q')
					valid_2 = true;
				else {
					valid_2 = false;
					std::cin.clear();
					std::cout << "Please enter a either p or q  " << std::endl;
					std::cin >> playOrQuit;
				}
			}
		}


	}

}

void Menu::checkNum(int* resp) {

	

	while (*resp < 1 || *resp > 4 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number between 1-4 " << std::endl;

		std::cin >> *resp;
	}

	

}
