#include <iostream>
#include <random>
#include "Game.h"
#include "Die.h"
#include "LoadedDie.h"


void Game::gameMenu() {
	int response;
	cout << "Please selct 1 to play war with dice, or 2 to quit" << endl;
	cout << "1.Play" << endl;
	cout << "2.Quit" << endl;
	cin >> response;


	while (cin.fail() || response < 1 || response > 2)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER (1 or 2) ";

		cin >> response;
	}

	if (response == 1) {
		cout << "Begin Game" << endl;
		cout << " " << endl;
	}
	else
		exit(0);

	cout << "Player 1: Play with loaded or unloaded die?" << endl;
	cout << "Type 1 for loaded or two for unloaded" << endl;
	cin >> typeDie_1; 
	while (cin.fail() || typeDie_1 < 1 || typeDie_1 > 2)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER (1 or 2) ";

		cin >> typeDie_1;
	}
	cout << " " << endl;

	cout << "Player 1, enter the number of sides for your die (must be greater then 6 " << endl;
	cout << "but less then 1000" << endl;
	cin >> dieSides_1;
	while (cin.fail() || dieSides_1 < 6 || dieSides_1 > 1000)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER between 6 and 1000 ";

		cin >> dieSides_1;
	}
	cout << " " << endl;

	cout << "Player 2: Play with loaded or unloaded die?" << endl;
	cout << "Type 1 for loaded or two for unloaded" << endl;
	cin >> typeDie_2;
	while (cin.fail() || typeDie_2 < 1 || typeDie_2 > 2)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER (1 or 2) ";

		cin >> typeDie_2;
	}
	cout << " " << endl;
	cout << "Player 2, enter the number of sides for your die (must be greater then 6 " << endl;
	cout << "but less then 1000" << endl;
	cin >> dieSides_2;
	while (cin.fail() || dieSides_2 < 6 || dieSides_2 > 1000)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER between 6 and 1000 ";

		cin >> dieSides_2;
	}
	cout << " " << endl;


	cout << "Please enter number of rounds to play (greater then 1, less then 1000" << endl;
	cin >> rounds;
	while (cin.fail() || rounds < 1 || rounds > 1000)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << " Please Enter a NUMBER between 1 and 1000 ";

		cin >> rounds;
	}

	


}



void Game::playGame() {

	Die *d1 = new Die(dieSides_1);
	Die *d2 = new Die(dieSides_2);
	LoadedDie *ld1 = new LoadedDie(dieSides_1);
	LoadedDie *ld2 = new LoadedDie(dieSides_2);

	int score_loaded = 0, score_unloaded = 0, draws = 0;

	

		if (typeDie_1 == 1 && typeDie_2 == 2) {
			for (int i = 0; i < rounds; i++) {

				int unloaded = d1->randomDieRet();
				int loaded = ld1->randomDieRet();

				cout << loaded << " Player 1" << endl;
				cout << unloaded << " Player 2 " << endl;

				cout << " " << endl;


				if (unloaded < loaded) {
					score_loaded++;
				}

				else if (loaded < unloaded)
					score_unloaded++;
				else
					draws++;
			}

			cout << "Player 1 score " << score_loaded << endl;
			cout << "Player 2 score " << score_unloaded << endl;
			cout << "draws " << draws << endl;
		}

		else if (typeDie_1 == 2 && typeDie_2 == 1) {

			for (int i = 0; i < rounds; i++) {

				int unloaded = d1->randomDieRet();
				int loaded = ld1->randomDieRet();

				cout << unloaded << " Player 1 " << endl;
				cout << loaded << " Player 2" << endl;
				cout << " " << endl;


				if (unloaded < loaded) {
					score_loaded++;
				}

				else if (loaded < unloaded)
					score_unloaded++;
				else
					draws++;
			}


			cout << "Player 1 score " << score_unloaded << endl;
			cout << "Player 2 score " << score_loaded << endl;
			cout << "draws " << draws << endl;


		}

		else if (typeDie_1 == 1 && typeDie_2 == 1) {

			int score_loaded_1 = 0, score_loaded_2 = 0;


			for (int i = 0; i < rounds; i++) {

				int loaded_1 = ld1->randomDieRet();
				int loaded_2 = ld2->randomDieRet();

				cout << loaded_1 << " Player 1 " << endl;
				cout << loaded_2 << " Player 2" << endl;
				cout << " " << endl;

				if (loaded_1 < loaded_2) {
					score_loaded_2++;
				}

				else if (loaded_2 < loaded_1)
					score_loaded_1++;
				else
					draws++;
			}



			cout << "Player 1 score " << score_loaded_1 << endl;
			cout << "Player 2 score " << score_loaded_2 << endl;
			cout << "draws " << draws << endl;



		}

		else if (typeDie_1 == 2 && typeDie_2 == 2) {

			int score_unloaded_1 = 0, score_unloaded_2 = 0;


			for (int i = 0; i < rounds; i++) {

				int unloaded_1 = d1->randomDieRet();
				int unloaded_2 = d2->randomDieRet();

				cout << unloaded_1 << " Player 1 " << endl;
				cout << unloaded_2 << " Player 2" << endl;
				cout << " " << endl;

				if (unloaded_1 < unloaded_2) {
					score_unloaded_2++;
				}

				else if (unloaded_2 < unloaded_1)
					score_unloaded_1++;
				else
					draws++;
			}



			cout << "Player 1 score " << score_unloaded_1 << endl;
			cout << "Player 2 score " << score_unloaded_2 << endl;
			cout << "draws " << draws << endl;



		}

		delete d1;
		delete d2;
		delete ld1;
		delete ld2;
		
		
		}



	
 
