/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/18/2017
* Description: Header file for Barbarian class
**************************************************************/

#include "Character.h"
#include <ctime>
#include<string>
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP 

class Barbarian: public Character
{

public: 
	Barbarian(std::string n1);
	Barbarian( int arm, int strg, std::string n1);
	int attack() override;
	void defense(int usrAttack, bool isM) override;

};

#endif

