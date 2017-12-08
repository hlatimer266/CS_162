#include <iostream>
#include "Rock.hpp"
using namespace std;

Rock::Rock() : Tool(){
	// setting default strength to be 1 is taken care of in the
	// Tool default constructor
	setType('r');
}
Rock::Rock(int s) : Tool(s){
	setStrength(s);
	setType('r');
}
int Rock::fight(Tool* opponent){
	// if opponent is scissors, double rock's srength
	if(opponent->getType() == 's'){
		return getStrength() * 2 - opponent->getStrength();
	}
	// if opponent is paper, double paper's strength	
	else if(opponent->getType() == 'p'){
		return getStrength() - opponent->getStrength() * 2;
	}
	// if opponent is also rock, no bias added
	else{ 
		return getStrength() - opponent->getStrength();
	}
}
