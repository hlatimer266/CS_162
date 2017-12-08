/*********************************************************************
** Class Name: menu
** Date: 10/30/17
** Description: Implementation file for the menu functions. Contains all
** the function definitions needed for the functions
*********************************************************************/

#include <iostream>
#include <string>

#include "menu.hpp"
#include "checkNum.hpp"


using std::cout;
using std::cin;
using std::endl;

int intMenu(std::string question, bool isYorN, int maxSize, int minSize, bool isHeading, std::string heading)
{
	std::string choice;
	bool goodNum;
	int userChoice = 0;

	/***************************************************************
	** Menu structure for displaying a yes or no question.
	***************************************************************/
	if (isYorN == true)
	{
		if (isHeading == true)
		{
			cout << heading << endl; //Display the heading if the user chooses
		}
		
		do		//Loop until the user chooses on of two correct choices
		{
			cout << endl << question << endl;
			getline(cin, choice);
			goodNum = checkInt(choice);
			if (!goodNum)
			{
				cout << endl << "Enter either a 1 or 2!" << endl << endl;
			}
			else
			{
				userChoice = std::stoi(choice);
				if (userChoice != 1 && userChoice != 2)
				{
					cout << endl << "Enter either a 1 or 2!" << endl << endl;
					goodNum = false;
				}
			}
		} while (!goodNum);
		return userChoice;
		
	}

	/***************************************************************
	** Menu structure for asking for some integer value
	***************************************************************/
	if (isYorN == false)
	{

		if (isHeading == true)
		{
			cout <<  heading << endl; //Display the heading if the user chooses
		}
		do
		{
			cout << endl << question << endl;
			getline(cin, choice);
			goodNum = checkInt(choice);
			if (!goodNum)
			{												//Display max and min size of number.
				cout << endl << "Enter an integer between " << minSize << " and " << maxSize << endl << endl;
			}
			else
			{
				userChoice = std::stoi(choice);
				if (userChoice > maxSize || userChoice < minSize) //If number entered not between max and min loop until it is.
				{
					cout << endl << "Enter an integer between " << minSize << " and " << maxSize << endl << endl;
					goodNum = false;
				}
			}
		} while (!goodNum);
		return userChoice = std::stoi(choice);
	}
	return userChoice;
}




char charMenu(std::string question, bool isYorN, bool isHeading, std::string heading)
{
	std::string choice;
	bool goodChar;
	char userChoice;

	/***************************************************************
	** Menu structure for displaying a yes or no question.
	***************************************************************/
	if (isYorN == true)
	{
		if (isHeading == true)
		{
			cout << heading << endl; //Display the heading if the user chooses
		}

		do		//Loop until the user chooses on of two correct choices
		{
			cout << endl << question << endl;
			getline(cin, choice);
			goodChar = checkStr(choice, true);
			if (!goodChar)
			{
				cout << "Enter either y or n!" << endl << endl;
			}
		} while (!goodChar);
		return userChoice = choice[0];
	}

	/***************************************************************
	** Menu structure for asking for some integer value
	***************************************************************/
	if (isYorN == false)
	{

		if (isHeading == true)
		{
			cout << heading << endl; //Display the heading if the user chooses
		}
		do
		{
			cout << endl << question << endl;
			getline(cin, choice);
			goodChar = checkStr(choice, false);
			if (!goodChar)
			{											
				cout << "Please select either r-rock, p-paper, s-scissor, e-exit" << endl << endl;
			}
		} while (!goodChar);
		return userChoice = choice[0];
	}
	return userChoice = choice[0];
}