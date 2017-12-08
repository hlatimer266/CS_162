/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/7/2017
* Description: Implementation file for Zoo class
**************************************************************/


#include "Zoo.h"
#include "Tiger.h"
#include "Penguin.h"
#include "Animal.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

 Zoo::Zoo (int nTigers, int nTurtles, int nPenguins, int startCash){
	
	 numTigers = nTigers;
	 numPenguins = nPenguins;
	 numTurtles = nTurtles;
	 user_bank = startCash;

	 
	 for (int i = 0; i < numTigers; i++) {
		 newTiger = new Tiger(1, 10000, 1, 1000, 2000);
		 animal_tiger[i] = newTiger;
	 }

	 for (int j = 0; j < numPenguins; j++)
	 {
		 newPenguin = new Penguin(1,1000,5,100,50);
		 animal_penguin[j] = newPenguin;
		 
	 }
		 
	 for (int k = 0; k < numPenguins; k++)
	 {
		 newTurtle = new Turtle(1, 100, 10, 5, 10);
		 animal_turtle[k] = newTurtle;
		 cout << animal_turtle[k]->getNumBabies() << endl;

	 }

	 
}
 
 void Zoo::gamePlay() {


	 int randomEvent;
	 string playOrQuit = "p";
	 while (playOrQuit != "q")  {
		 day++;
		 randomEvent = rand() % 4;

		 cout << "Start of day " << day << endl;
 		 //increase age of all animals by 1
		 increaseAge();

		 //subtract feeding costs
		 feedCosts();

		 if (randomEvent == 0) {
			 //randomly kill off one animal
			 randomSickness();

		 }

		 else if (randomEvent == 1) {
			 //Generate a random bonus for the day, 250-500 dollars for each tiger in the zoo
			 //Add the bonus payoff for each tiger to the total payoff of the day as a reward
			 randomBonus();

		 }

		 else if (randomEvent == 2) {
			 //generate new random babay animal
			 newAnimalBaby();

		 }

		 else if (randomEvent == 3)
			 cout << "Just another day at the zoo.." << endl;

		 //ask user if they want to buy an adult animal
		 purchaseAnimal();

		 //calculate profit for the day. Add any bonus money
		 payOffDay += (numTigers * 2000) + (numTurtles * 5) + (numPenguins * 100);
		 user_bank += payOffDay;

		 if (user_bank <= 0) {
			 cout << "you've run out of money! you lose!" << endl;
			 cout << day << "'s played" << endl;
			 break;
		 }
		 else {
			 cout << "total earnings " << payOffDay << endl;
			 cout << "money in the bank " << user_bank << endl;
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

	 }
		 		 	
}
		 	
		

// fucntion that randomly selects one animal to kill off
	 
 void Zoo::randomSickness() {

	 //Random Sickness
	 char deathList[3] = { 'T','P','R' };
	 int deathNum = rand() % 3;
	 
	 


	 if (deathList[deathNum] == 'T') {
		 if (numTigers == 0 && deathList[deathNum] == 'T')
			 cout << "all the Tigers in the zoo have died" << endl;
		 else {
			 
			 delete animal_tiger[numTigers - 1];
			 numTigers--;
			 cout << "One tiger has died" << endl;
			 
		 }
	 }
	 
	 else if (deathList[deathNum] == 'T') {
		 if (numPenguins == 0 && deathList[deathNum] == 'P')
			 cout << "all the Penguins in the zoo have died" << endl;
		 else {
			  delete animal_penguin[numPenguins-1];
			 cout << "One Penguin has died" << endl;
			 numPenguins--;
		 }
	 }
	 else if (deathList[deathNum] == 'R') {
		 if (numTurtles == 0 && deathList[deathNum] == 'P')
			 cout << "all the Turtles in the zoo have died" << endl;
		 else {
			  delete animal_turtle[numTurtles-1];
			 cout << "One Turtle has died" << endl;
			 numTurtles--;
		 }

	 }
	 


 }

//selects either a $250 or $500 bounus for each tiger in the Zoo
 void Zoo::randomBonus() {

	 int bonusTiger = rand() % 1;

	 if (bonusTiger == 0) {
		 int bonusMoney = 0;
		 bonusMoney += (numTigers * 250);
		 payOffDay += bonusMoney;
		 cout << "You received a Tiger Bonus of $250 for each tiger!" << endl;
	 }
	 else if (bonusTiger == 1)
	 {
		 int bonusMoney = 0;
		 bonusMoney += (numTigers * 500);
		 payOffDay += bonusMoney;
		 cout << "You received a Tiger Bonus of $500 for each tiger!" << endl;
	 }


 }

 //increase the add of all animals in the zoo
 void Zoo::increaseAge() {

	 for (int i = 0; i < (numTigers-1); i++) {
		 animal_tiger[i]->setAge(animal_tiger[i]->getAge() + 1);
		 
	 }
	 for (int i = 0; i < (numPenguins-1); i++) {
		 animal_penguin[i]->setAge(animal_penguin[i]->getAge() + 1);
		 
	 }
	 
	 for (int i = 0; i < (numTurtles-1); i++) {
		 animal_turtle[i]->setAge(animal_turtle[i]->getAge() + 1);
		 
	 }

 }
 
//fucntion to purhcase 1 animal of the users choosing at the end of each day
 void Zoo::purchaseAnimal() {

	 string response;
	 string animalType;
	 cout << "would you like to buy another animal (type y for yes or n for no)?" << endl;
	 cin >> response;
	 bool valid_2 = false;

	 while (valid_2 == false) {
		 cin.clear();
		 if (response.length() > 1) {
			 valid_2 = false;
			 cin.clear();
			 cout << "Please enter a either y or n " << endl;
			 cin >> response;
		 }
		 else if (!isalpha(response.at(0))) {
			 valid_2 = false;
			 cin.clear();
			 cout << "Please enter a either y or n  " << endl;
			 cin >> response;
		 }
		 else
		 {
			 char c = tolower(response.at(0));
			 if (c == 'y' || c == 'n')
				 valid_2 = true;
			 else {
				 valid_2 = false;
				 cin.clear();
				 cout << "Please enter a either y or n  " << endl;
				 cin >> response;
			 }
		 }
	 }

	 if (response == "n")
		 cout << " " << endl;
	 else {
		 cout << "What type of animal would you like? Type T for tiger, P for Penguin or R for turtle" << endl;
		 cin >> animalType;

		 bool valid = false;
		 while (valid == false) {
			 cin.clear();
			 if (animalType.length() > 1) {
				 valid = false;
				 cin.clear();
				 cout << "Please enter a valid animal (T,P,R) " << endl;
				 cin >> animalType;

			 }
			 else if (!isalpha(animalType.at(0))) {
				 valid = false;
				 cin.clear();
				 cout << "Please enter a valid animal (T,P,R) " << endl;
				 cin >> animalType;

			 }
			 else
			 {
				 char c = tolower(animalType.at(0));
				 if (c == 't' || c == 'p' || c == 'r')
					 valid = true;
				 else {
					 valid = false;
					 cin.clear();
					 cout << "Please enter a valid animal (T,P,R) " << endl;
					 cin >> animalType;

				 }
			 }


		 }
	 }

	
	 if (animalType == "t") {
		 if (numTigers >= SIZE_t)
			 increaseTigersize();
		 else {
			 addTiger();
			 animal_tiger[numTigers - 1]->setAge(3);
			 user_bank -= 10000;
			 cout << "You bought a tiger!!" << endl;
		 }
		 
	 }

	 else if (animalType == "p") {
		 if (numPenguins >= SIZE_p)
			 increasePenguinsize();
		 else {
			 addPenguin();
			 animal_penguin[numPenguins - 1]->setAge(3);
			 user_bank -= 1000;
			 cout << "You bought a Penguin!!" << endl;
			 
		 }
	 }

	 else if (animalType == "r") {
		 if (numTurtles >= SIZE_r)
			 increaseTurtlesize();
		 else {
			 addTurtle();
			 animal_turtle[numTurtles - 1]->setAge(3);
			 user_bank -= 100;
			 cout << "You bought a Turtle" << endl;
		 }

	 }
 }

	
 //random fucntion that generates a new class object for either the tiger, penguin or turtle
 void Zoo::newAnimalBaby() {
	 char randomBaby[3] = { 'T', 'P', 'R' };
	 int randomBabyInt = rand() % 3;


	 if (randomBaby[randomBabyInt] == 'T') {
		 for (int i = 0; i < (numTigers-1); i++) {
			 if (animal_tiger[i]->getAge() >= 3)
			 {
				 if (numTigers >= SIZE_t)
					 increaseTigersize();
				 else {
					 if (numTigers >= SIZE_t)
						 increaseTigersize();
					 else {
						 addTiger();

					 }
					 cout << "a new baby tiger was born!" << endl;
					 break;
				 }

			 }
			 

		 }
	 }

	 else if (randomBaby[randomBabyInt] == 'P') {
		 for (int i = 0; i < (numPenguins-1); i++) {
			 if (animal_penguin[i]->getAge() >= 3)
			 {
				 if (numPenguins >= SIZE_p)
					 increasePenguinsize();
				 else {
					 for (int i = 0; i < 4; i++) {
						 if (numPenguins >= SIZE_p)
							 increasePenguinsize();
						 else {
							 addPenguin();
						 }
					 }
					 cout << "five new penguins were born!" << endl;
					 break;
				 }

			 }
			
		 }
	 }

	 else if (randomBaby[randomBabyInt] == 'R') {
		 for (int i = 0; i < (numTurtles-1); i++) {
			 if (animal_turtle[i]->getAge() >= 3)
			 {
					 if (numTurtles >= SIZE_t)
						 increaseTurtlesize();
					 else {	
							
							for (int i = 0; i < 9; i++) {
								if (numTurtles >= SIZE_t)
									increaseTurtlesize();
								else {
									addTurtle();
								}
							}
						 }
					 cout << "Ten turtles were born!" << endl;
						 break;
															}

					}
	
			 }
	 else 
		 cout << "no animal old enough to have a baby" << endl;

		 }
	 

 
 //function to increase the size of the tiger array
 void Zoo::increaseTigersize() {
	
	     Animal ** temp = nullptr;
		 SIZE_t *= 2;

		 temp = new Animal*[numTigers];

		 //copy the array passed as a parameter to the dynamically allocated array temp
		 for (int i = 0; i < (numTigers-1); i++) {

			 temp[i] = animal_tiger[i];

		 }

		 //release the memory of the passed array
		 delete[]animal_tiger;
		 animal_tiger = NULL;

		 //reinitialize the passed array and double the size
		 animal_tiger = new Animal*[numTigers * 2];

		 //copy the original contents of the passed array to the first half of the array
		 for (int k = 0; k < numTigers; k++) {

			 animal_tiger[k] = temp[k];
		 }


		 //release temp from memory
		delete[] temp;
		 temp = NULL;
	 }

 void Zoo::increasePenguinsize(){
	  
		 Animal ** temp1 = nullptr;
		 SIZE_p *= 2;

		 temp1 = new Animal*[numPenguins];

		 //copy the array passed as a parameter to the dynamically allocated array temp
		 for (int i = 0; i < (numTurtles-1); i++) {

			 temp1[i] = animal_penguin[i];

		 }

		 //release the memory of the passed array
		 delete[]animal_penguin;
		 animal_penguin = NULL;

		 //reinitialize the passed array and double the size
		 animal_penguin = new Animal*[numPenguins * 2];

		 //copy the original contents of the passed array to the first half of the array
		 for (int k = 0; k < (numTurtles-1); k++) {

			 animal_penguin[k] = temp1[k];
		 }


		 //release temp from memory
		 delete[] temp1;
		 temp1 = NULL;


	}
 void Zoo::increaseTurtlesize() {
	   
	 Animal ** temp2 = nullptr;
	 SIZE_r *= 2;

	 temp2 = new Animal*[numTurtles];

	 	 //copy the array passed as a parameter to the dynamically allocated array temp
	 	 for (int i = 0; i < (numTurtles); i++) {

	 		 temp2[i] = animal_turtle[i];

	 	 }

	 	 //release the memory of the passed array
	 	 delete[]animal_turtle;
	 	 animal_turtle = NULL;

	 	 //reinitialize the passed array and double the size
		 animal_turtle = new Animal*[numTurtles * 2];

	 	 //copy the original contents of the passed array to the first half of the array
	 	 for (int k = 0; k < (numTurtles); k++) {

	 		 animal_turtle[k] = temp2[k];
	 	 }


	 	 //release temp from memory
	 	 delete[] temp2;
	 	 temp2 = NULL;
		
 }
	 
 //totals up feedcost of all animals in the zoo
 void Zoo::feedCosts() {

	 for (int i = 0; i < (numTigers); ++i) {
		 tigerTotal += numTigers * animal_tiger[i]->getFeedCost();
	 }
	 

	 for (int j = 0; j < (numPenguins); ++j) {
		 penguinTotal += numPenguins * animal_penguin[j]->getFeedCost();
	 }

	 for (int k = 0; k < (numTurtles); ++k) {
		 turtleTotal += numTurtles * animal_turtle[k]->getFeedCost();
	 }

	 user_bank -= (tigerTotal + penguinTotal + turtleTotal);

	 cout << "Feeding cost " << (tigerTotal + penguinTotal + turtleTotal) << endl;


 }

	//add new tiger class object to tiger array
 void Zoo::addTiger() {

		 numTigers++;
		 newTiger = new Tiger(0, 10000, 1, 50, 2000);
		 animal_tiger[numTigers-1] = newTiger;
		
}
	//add new penguin class object
 void Zoo::addPenguin() {

	 numPenguins++;
	 newPenguin = new Penguin(0, 1000, 5, 10, 100);
	 animal_penguin[numPenguins-1] = newPenguin;

 }

	//add new turtle class object
void Zoo::addTurtle()
 {
	
		numTurtles++;
		newTurtle = new Turtle(0, 100, 10, 5, 10);
		animal_turtle[numTurtles-1] = newTurtle;
	
 }

//destructor
Zoo::~Zoo()
 {
	delete newTiger;
	delete newTurtle;
	delete newPenguin;

	 for (int i = 0; i < (numTigers-1) ; i++)
	 {
		 delete animal_tiger[i]; 
	 }
	 delete animal_tiger;

	 for (int j = 0; j < (numPenguins-1) ; j++)
	 {
		 delete animal_penguin[j];
	 }
	 delete animal_penguin;

	 for (int k = 0; k < (numTurtles-1); k++)
	 {
		 delete animal_turtle[k];
	 }
	 delete animal_turtle;

 }