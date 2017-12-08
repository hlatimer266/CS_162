/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/7/2017
* Description: Implementation file for Menu function
**************************************************************/

#include<limits>
#include <iostream>
#include<cstdlib>
#include<cstdio>
#include <string>

#include "Grid.hpp"
#include "Ant.hpp"
#include "Menu.hpp"

using namespace std;


//Asks user to either start the Langtons ant program or to quit
void  Menu::startStop() {
	int response;
	cout << "1.Start langton's ant" << endl;
	cout << "2.Quite" << endl;
	cin >> response;

	
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		cout << " Please Enter a NUMBER (1 or 2) ";

		cin >> response;
	}
	
	while (response < 1 || response > 2) {

		cout << "Please enter either 1 to start or 2 to quite" << endl;
		cin >> response;
	}

	if (response == 1)
		cout << "Begin Simulation" << endl;
	else
		exit(0);
		
		
}

void Menu::startParms()
{
	string playOrQuit = "p";

	while (playOrQuit != "q") {

		int numRows, numCols, antRow, antCol, iterations;
		string direction;
		
		cout << "Please enter number of rows (between 1-80)" << endl;
		cin >> numRows;
		checkNum(&numRows);

		cout << "Please enter number of Columns (between 1-80)" << endl;
		cin >> numCols;
		checkNum(&numCols);

		cout << "Please enter start row for ant (between 1-80)" << endl;
		cin >> antRow;
		checkNum(&antRow);

		cout << "Pleae enter start column for ant (between 1-80)" << endl;
		cin >> antCol;
		checkNum(&antCol);

		cout << "Please enter number of steps (between 1-1000)" << endl;
		cin >> iterations;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << " Please Enter a NUMBER (rows) ";

				cin >> iterations;
			}

			while (iterations < 1 || iterations > 10000) {

				cout << "Please enter either 1 to start or 10000" << endl;
				cin >> iterations;
			}

		cout << "Please enter start direction (n,s,e,w)" << endl;
		cin >> direction;

		bool valid = false;

		while (valid == false) {
			cin.clear();
			if (direction.length() > 1) {
				valid = false;
				cin.clear();
				cout << "Please enter a valid direction (n,s,e,w) " << endl;
				cin >> direction;
			}
			else if (!isalpha(direction.at(0))) {
				valid = false;
				cin.clear();
				cout << "Please enter a valid direction (n,s,e,w) " << endl;
				cin >> direction;
			}
			else
			{
				char c = tolower(direction.at(0));
				if (c == 'n' || c == 's' || c == 'e' || c == 'w')
					valid = true;
				else {
					valid = false;
					cin.clear();
					cout << "Please enter a valid direction (n,s,e,w) " << endl;
					cin >> direction;
				}
			}


		}

		Grid* board;

		board = new Grid(numRows, numCols, antRow, antCol, direction.at(0));
		cout << iterations << endl;



		for (int i = 0; i < iterations; i++) {

			board->printGrid();

			board->moveAnt();
		}
	
		cin.clear();
		cout << "type p to play again or q to quit" << endl;
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

		board->freeMem();
		
	}

	
	
	
}

void Menu::checkNum(int* Usernum){

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER (rows) ";

		cin >> *Usernum;
	}

	while (*Usernum < 1 || *Usernum > 80) {

		cout << "Please enter either 1 to start or 80" << endl;
		cin >> *Usernum;
	}


}

	
	
	



