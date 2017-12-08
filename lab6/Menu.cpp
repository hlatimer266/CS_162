/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/6/2017
* Description: Implementation file for Menu class
**************************************************************/
#include"Menu.h"
#include <string>
#include "dLinkedList.h"
#include "Node.h"
#include <iostream>
#include<limits>


void Menu::game()

{
	dLinkedList list;
	std::string playOrQuit = "p";
	while (playOrQuit != "q") {


		//Character selection menu
		int user_response;
		int u_r;
		std::cin.clear();
		std::cout << "Enter 1 to add an integer to the head of a linked list" << std::endl;
		std::cout << "Enter 2 to add an integer to the tail of a linked list" << std::endl;
		std::cout << "Enter 3 to delete an integer at the head of a linked list" << std::endl;
		std::cout << "Enter 4 to delete an integer at the tail of a linked list" << std::endl;
		std::cout << "Enter 5 to print the linked list in reverse" << std::endl;
		std::cout << "Enter 6 to print the head value of the linked list" << std::endl;
		std::cout << "Enter 7 to print the tail value of the linked list" << std::endl;
		std::cout << "Enter 8 to exit " << std::endl;
		std::cin >> user_response;

		checkNum(&user_response);
		
		if (user_response == 1)
		{
			std::cout << "Please enter an integer between 1-100 (add to head)" << std::endl;
			std::cin >> u_r;
			checkNum_2(&u_r);
			list.addToHead(u_r);
			std::cout << "Linked list: ";
			list.displayList();
			std::cout << " " << std::endl;
		}

		else if (user_response == 2)
		{
			std::cout << "Please enter an integer between 1-100 (add to tail)" << std::endl;
			std::cin >> u_r;
			checkNum_2(&u_r);
			list.addToTail(u_r);
			std::cout << "Linked list: ";
			list.displayList();
			std::cout << " " << std::endl;
		}

		else if (user_response == 3)
		{
			list.delHead();
			std::cout << "Linked list: ";
			list.displayList();
			std::cout << " " << std::endl;
		}

		else if (user_response == 4)
		{
			list.delTail();
			std::cout << "Linked list: ";
			list.displayList();
			std::cout << " " << std::endl;
		}

		else if (user_response == 5)
		{
			std::cout << "Linked list: ";
			list.displayListBack();
			std::cout << " " << std::endl;
		}
		else if (user_response == 6)
			std::cout << "head Value = " << list.getHeadValue() << std::endl;
		else if (user_response == 7)
			std::cout << "tail Value = " << list.getTailValue() << std::endl;
		else if (user_response == 8)
			exit(0);
			
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

	while (*resp < 1 || *resp > 8 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number between 1-6 " << std::endl;

		std::cin >> *resp;
	}



}

void Menu::checkNum_2(int* resp) {

	//input validation for character menu

	while (*resp < 1 || *resp > 100 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number between 1-100 " << std::endl;

		std::cin >> *resp;
	}



}