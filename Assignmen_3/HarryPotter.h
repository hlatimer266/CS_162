/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Harry Potter class
**************************************************************/

#include "Character.h"
#include <ctime>
#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP 

class HarryPotter : public Character
{
private: int times_killed = 0;

public:
	HarryPotter();
	int attack() override;
	void defense(int usrAttack, bool isM) override;

};

#endif
