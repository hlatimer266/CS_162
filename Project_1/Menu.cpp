

#include <iostream>
#include <string>

#include "Grid.hpp"
#include "Ant.hpp"
#include "Menu.hpp"



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
	int numRows, numCols, antRow, antCol, iterations;
	char direction;

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
	/*
		while (direction != 'n' || direction != 's' || direction != 'e' || direction != 'w'); {
			cin.clear();
			cout << "Enter either n,s,e,w: ";
			cin >> direction;
		} 
		*/


	
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

	cout << *Usernum << endl;
}

	
	
	



