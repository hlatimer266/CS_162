/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/10/2017
* Description: Header file for Zoo Class
**************************************************************/

#ifndef ZOO_HPP
#define ZOO_HPP

#include<iostream>
#include<string>
#include "Animal.h"
#include "Tiger.h"
#include "Penguin.h"
#include "Turtle.h"
#include <cstdlib>


class Zoo {
	

private:
	int user_bank, payOffDay = 0;
	int day = 0;
	int numTigers = 0, numTurtles = 0, numPenguins = 0;
	int tigerTotal = 0;
	int turtleTotal = 0;
	int penguinTotal = 0;
	int SIZE_t = 10;
	int SIZE_p = 10;
	int SIZE_r = 10;

	
	Animal **animal_tiger = new Animal*[10];
	Animal **animal_penguin = new Animal*[10];
	Animal **animal_turtle = new Animal*[10];
	
	Tiger *newTiger = nullptr;
	Penguin *newPenguin = nullptr;
	Turtle *newTurtle = nullptr;

	void randomSickness();
	void randomBonus();
	void increaseAge();
	void purchaseAnimal();
	void newAnimalBaby();
	void increaseTigersize();
	void increasePenguinsize();
	void increaseTurtlesize();
	void feedCosts();
	void addTiger();
	void addPenguin();
	void addTurtle();
	

public:

	Zoo(int nTigers, int nTurtles, int nPenguins, int startCash);
	void gamePlay();
	~Zoo();
	

};
	

#endif




