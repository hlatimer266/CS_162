#include <iostream>
#include <string>
#include <cmath> 
#include <random>
#include <chrono>
#include <functional>
#include <array>
#include <map>

#include "LoadedDie.h"
#include "Die.h"
using namespace std; 

		LoadedDie::LoadedDie(int Num_l): Die(Num_l){
		
		}

		int LoadedDie::randomDieRet(){

			unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
			std::default_random_engine generator(seed);

			
			std::uniform_int_distribution<int> loaded_roll((N-3), N);
			int loaded_die = loaded_roll(generator);
			
			return loaded_die;
		}

		void LoadedDie:: setSides(int Num_1 ){
			
			N = Num_1;
			cout << N << " number of sides for loaded" << endl;
		
		}

		LoadedDie::~LoadedDie()
		{
		}

		

		
