/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for Character class
**************************************************************/
#include"Character.h"

Character::Character(){}
Character::Character( int arm, int strg)
{
	strength = strg;
	armor = arm;
	
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
