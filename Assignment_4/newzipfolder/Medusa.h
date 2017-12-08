/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Medusa class
**************************************************************/

#include "Character.h"
#include <ctime>
#include <string>
#ifndef MEDUSA_HPP
#define MEDUSA_HPP 

class Medusa : public Character
{
public:
	Medusa(std::string n1);
	int attack() override;
	void defense(int usrAttack, bool isM) override;

};

#endif
