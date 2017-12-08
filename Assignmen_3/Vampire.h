/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/29/2017
* Description: Header file for Barbarian class
**************************************************************/

#include "Character.h"
#include <ctime>
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP 

class Vampire : public Character
{
public:
	Vampire();
	int attack() override;
	void defense(int usrAttack, bool isM) override;
};

#endif
