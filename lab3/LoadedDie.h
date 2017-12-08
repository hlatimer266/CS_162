#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <random>

#include "Die.h"

class LoadedDie : public Die{

	
	public:
		LoadedDie(int);
		int randomDieRet();
		void setSides(int Num_1 );
		~LoadedDie();

};

#endif