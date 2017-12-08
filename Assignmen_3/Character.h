/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Header file for Character class
**************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP 
class Character
{
protected:
	int armor,strength;
	bool isMedusa = false;
	
public:
	Character();
	Character( int arm, int strg );
	virtual int attack()=0;
	virtual void defense(int usrAttack, bool isM) = 0;
	virtual int getStrength();
	virtual bool getMedusa();

};
#endif