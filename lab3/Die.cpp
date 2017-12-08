


#include <iostream>
#include <string>
#include <cmath> 
#include <random>
#include <chrono>

#include "Die.h"
using namespace std; 

		Die::Die(int Num){
		
			N = Num;
		}

		int Die::randomDieRet(){
		
				//Code used from https://stackoverflow.com/questions/7560114/random-number-c-in-some-range#7560564
				// user Cubbi
			unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
			std::default_random_engine generator(seed);

			std::uniform_int_distribution<int> regular_die(1, N);

			int regular_roll = regular_die(generator);

			return regular_roll;
		}

		Die::~Die() 
		{
		
		}