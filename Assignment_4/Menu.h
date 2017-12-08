/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Menu class
**************************************************************/

#include "Character.h"
#include"Barbarian.h"
//#include"HarryPotter.h"
#include<string>
#include "Vampire.h"
#include"DynIntStack.h"
#include"BlueMen.h"
#include<iostream>


#ifndef Menu_HPP
#define Menu_HPP 
class Menu {
private:
	Character *c1, *c2, *c3, *c4;
	void checkNum(int* resp);
public:
	DynIntStack stack1;
	DynIntStack stack2;
	DynIntStack deathstack;
	Menu();
	void game();
	void playerattack();
	~Menu();
};

#endif
