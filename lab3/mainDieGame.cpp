

#include <iostream>
#include <string>
#include <chrono>
#include "Die.h"
#include "LoadedDie.h"
#include "Game.h"
using namespace std; 

int main() {


	Game g1;

	string playOrQuit = "p";

	while (playOrQuit != "q") {

		g1.gameMenu();
		g1.playGame();

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
	}
}