/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Menu class
**************************************************************/

#include "Character.h"
#include"Barbarian.h"
#include"HarryPotter.h"
#include<string>
#include "Vampire.h"
#include"BlueMen.h"
#include<iostream>


#ifndef Menu_HPP
#define Menu_HPP 
class Menu {
private:
	Character *c1, *c2;
	void checkNum(int* resp);
public:
	Menu();
	void game();
	void playerattack(Character*& c1, Character*& c2);
	~Menu();
};

#endif
