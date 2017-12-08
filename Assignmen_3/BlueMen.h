/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for BlueMen class
**************************************************************/

#include "Character.h"
#include <ctime>
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP 

class BlueMen : public Character
{
private: int die1, die2, die3;
public:
	BlueMen();
	int attack() override;
	void defense(int usrAttack, bool isM) override;

};

#endif
