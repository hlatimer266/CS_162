#ifndef DIE_HPP
#define DIE_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <random>

class Die{

	protected:
		int N;

	public:
		Die(int Num);
		virtual int randomDieRet();
		~Die();
		

};

#endif