/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/10/2017
* Description: Implementation file for ZooMenu function
**************************************************************/

#include<limits>
#include <iostream>
#include<cstdlib>
#include<cstdio>
#include <string>

#include "ZooMenu.h"
#include "Zoo.h"
#include "Animal.h"
#include "Tiger.h"
#include "Penguin.h"
#include "Turtle.h"

using namespace std;

 ZooMenu::ZooMenu(){}
//Asks user to either start the Langtons ant program or to quit
void  ZooMenu::startStop() {
	int response;
	cout << "Welcome to Zoo Tycoon!" << endl;
	cout << "1.Start Zoo" << endl;
	cout << "2.Quit" << endl;
	cin >> response;

	while (response < 1 || response > 2 || cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER (1 or 2) ";

		cin >> response;
	}

	if (response == 1) {
		cout << " " << endl;
		cout << "Begin Simulation" << endl;
		cout << " " << endl;
	}
	else
		exit(0);


}

void ZooMenu::startParms()
{
	string playOrQuit = "p";

	while (playOrQuit != "q") {

		int numTigers, numPenguin, numTurtle, startCash = 100000;
		
		
		cout << "To start, you have $100,000 in the bank." << endl;
		cout << "Please choose how many you would like of each animal" << endl;
		cout << "Cost of each is: Tiger = $10,000, Penguin = $1,000 and  Turle = $100" << endl;
		cout << "Select the quantity of each you would like (you need at least one of each" << endl;
		cout << "Number Tigers (please enter either 1 or 2)?" << endl;
		cin >> numTigers;
		checkNum(&numTigers, &startCash, "Tiger");

		cout << "Number Penguins (please enter either 1 or 2)?" << endl;
		cin >> numPenguin;
		checkNum(&numTigers, &startCash, "Penguin");

		cout << "Number Turtles (please enter either 1 or 2)?" << endl;
		cin >> numTurtle;
		checkNum(&numTurtle, &startCash, "Turtle");

		cout << "Money left in bank = $" << startCash << endl;

		//instantiate zoo here
		// game will be played in this menu function
		Zoo *nZ1 = new Zoo(numTigers, numTurtle, numPenguin, startCash);

		nZ1->gamePlay();
		delete nZ1;
		 
		cin.clear();
		cout << "Are you sure you want to quit? type p to play again or q to quit" << endl;
		cin >> playOrQuit;

		bool valid_2 = false;

		while (valid_2 == false) {
			cin.clear();
			if (playOrQuit.length() > 1) {
				valid_2 = false;
				cin.clear();
				cout << "Please enter a either p or q " << endl;
				cin >> playOrQuit;
			}
			else if (!isalpha(playOrQuit.at(0))) {
				valid_2 = false;
				cin.clear();
				cout << "Please enter a either p or q  " << endl;
				cin >> playOrQuit;
			}
			else
			{
				char c = tolower(playOrQuit.at(0));
				if (c == 'p' || c == 'q')
					valid_2 = true;
				else {
					valid_2 = false;
					cin.clear();
					cout << "Please enter a either p or q  " << endl;
					cin >> playOrQuit;
				}
			}
		}

		
		
		
	}


	

}

void ZooMenu::checkNum(int* numAnimal, int* Money, string animalType) {

	int cost;
	
	while (*numAnimal < 1 || *numAnimal > 2 || cin.fail() )
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a numberic quantity ";

		cin >> *numAnimal;
	}

	if (animalType == "Tiger") {
		cost = 10000 * (*numAnimal);
		*Money -= cost;
	}
	else if (animalType == "Penguin") {
		cost = 1000 * (*numAnimal);
		*Money -= cost;
	}
	else if (animalType == "Turtle") {
		cost = 100 * (*numAnimal);
		*Money -= cost;
	}

	

}