/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for Character class
**************************************************************/
#include"Character.h"

Character::Character(){}
Character::Character( int arm, int strg, std::string n1)
{
	strength = strg;
	armor = arm;
	name = n1;
	
}

 int Character::attack()
{
	 return 0;
};
 void Character::defense(int usrAttack, bool isM) {};

 int Character::getStrength()
 {
	 return strength;
 };

bool Character::getMedusa()
{
	return isMedusa;
}
