#include <iostream>
#include "Scissors.hpp"
using namespace std;

Scissors::Scissors() : Tool(){
	// setting the default strength to 1 is taken care of in the
	// Tool's default constructor
	setType('s');
}
Scissors::Scissors(int s) : Tool(s){
	setStrength(s);
	setType('s');
}
int Scissors::fight(Tool* opponent){
	// if opponent is paper, double scissors' strength
	if(opponent->getType() == 'p'){
		return getStrength() * 2 - opponent->getStrength();
	}	
	// if opponent is rock, double rock's strength
	else if(opponent->getType() == 'r'){
		return getStrength() - opponent->getStrength() * 2;
	}
	// if opponent is also scissors, no bias added
	else{ 
		return getStrength() - opponent->getStrength();
	}
}
