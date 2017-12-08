/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Character class
**************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP 
#include <string>
class Character
{
protected:
	int armor,strength;
	std::string name;
	bool isMedusa = false;
	
public:
	Character();
	Character( int arm, int strg, std::string n1 );
	virtual int attack()=0;
	virtual void defense(int usrAttack, bool isM) = 0;
	virtual int getStrength();
	virtual bool getMedusa();

};
#endif