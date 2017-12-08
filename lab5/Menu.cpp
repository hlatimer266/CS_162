/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for Menu functions
**************************************************************/
#include <iostream>
#include <string>
#include "Menu.h"
#include "triangularNum.h"
#include "sumArray.h"
#include "printBack.h"
#include <limits>

void Menu()
{
	
	std::string playOrQuit = "p";
	while (playOrQuit != "q") {
		int user_response;
		std::cin.clear();
		std::cout << "Enter 1 to print a string backwards" << std::endl;
		std::cout << "Enter 2 calculate the sum of a set of integers" << std::endl;
		std::cout << "Enter 3 calculate the triangular number of an integer" << std::endl;
		std::cout << "Enter 4 to exit " << std::endl;
		std::cin >> user_response;

		checkNum(&user_response);
		
		if (user_response == 1) {
			std::cin.ignore();
			std::string input_string;
			std::cout << "Please enter a string" << std::endl;
			getline(std::cin, input_string);


			bool valid = false;
			for (int i = 0; i < input_string.length(); i++) {
				if (!isalpha(input_string.at(i))) {
					valid = false;
					std::cin.clear();
					std::cout << "Please enter string  " << std::endl;
					getline(std::cin, input_string);
				}
			}

			printBack(input_string.length(), input_string);
		}
		
			else if (user_response == 2)
			{
				std::cin.clear();
				int size_2;
				int *userArray;
				int sum;
				std::cout << "Please enter the size of an array (between 1 and 10)" << std::endl;
				std::cin >> size_2;
				checkNum_2(&size_2);
				
				userArray = new  int[size_2];
				std::cout << "Please enter a integer and press enter" << std::endl;
				for (int i = 0; i < size_2; i++) {
					int userNum;

					std::cin >> userNum;
					checkInteger(&userNum);
					userArray[i] = userNum;	
					
				}
				sum = sumArray(userArray, size_2);
				std::cout << "Sum of array values: " << sum << std::endl;
				delete[] userArray;

			}
				
			else if (user_response == 3)
			{	
				int n_1;
				int sum_2;
				std::cout << "Please enter a integer N" << std::endl;
				std::cin >> n_1;
				checkInteger(&n_1);
				sum_2 = triangularNum(n_1);
				std::cout << sum_2 << std::endl;

			}
				
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


void checkNum(int* resp) {



	while (*resp < 1 || *resp > 4 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number between 1-4 " << std::endl;

		std::cin >> *resp;
	}



}

void checkNum_2(int* resp_1) {



	while (*resp_1 < 1 || *resp_1 > 10 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number between 1-10 " << std::endl;

		std::cin >> *resp_1;
	}



}

void checkInteger(int* resp_2) {



	while ( std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter an integer " << std::endl;

		std::cin >> *resp_2;
	}



}

