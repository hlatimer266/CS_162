#include <iostream>
#include "Paper.hpp"
using namespace std;

Paper::Paper() : Tool(){
	// setting default strength to be 1 is taken care of in the
	// Tool default constructor
	setType('p');
}
Paper::Paper(int s) : Tool(s){
	setStrength(s);
	setType('p');
}
int Paper::fight(Tool* opponent){
	// if opponent is rock, double paper's strength
	if(opponent->getType() == 'r'){
		return getStrength() * 2 - opponent->getStrength();
	}	
	// if opponent is scissors, double scissors' strength
	else if(opponent->getType() == 's'){
		return getStrength() - opponent->getStrength() * 2;
	}
	// if opponent is also paper, no bias added
	else{ 
		return getStrength() - opponent->getStrength();
	}
}
