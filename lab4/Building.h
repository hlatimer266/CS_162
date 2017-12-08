#ifndef BUILDING_HPP
#define BUILDING_HPP 

#include <iostream>
#include <string>
#include "Building.h"

class Building {

private:
	std::string name_build; 
	int size_sqrtft;
	std::string build_address;

public:
	
	Building(std::string name, int size, std::string address);
	void buildInformation();

};

#endif
