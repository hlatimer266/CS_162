#include <iostream>
#include "Tool.hpp"

Tool::Tool(){
	setStrength(1);
}
Tool::Tool(int s){
	setStrength(s);
}
int Tool::getStrength(){
	return strength;
}
void Tool::setStrength(int s){
	strength = s;
}
char Tool::getType(){
	return type;
}
void Tool::setType(char c){
	type = c; 
}
Tool::~Tool(){
	std::cout << "" << std::endl;
}
