/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Barbarian class
**************************************************************/

#include "Character.h"
#include <ctime>
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP 

class Barbarian: public Character
{
public: 
	Barbarian();
	Barbarian( int arm, int strg);
	int attack() override;
	void defense(int usrAttack, bool isM) override;

};

#endif

