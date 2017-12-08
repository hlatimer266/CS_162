/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/23/2017
* Description: Implementation file for Building class
**************************************************************/

#include <iostream>
#include <string>
#include "Building.h"

Building::Building(std::string name, int size, std::string address)
{
	name_build = name;
	size_sqrtft = size;
	build_address = address;

}

void Building::buildInformation()
{
	std::cout << "Building Name: " << name_build << std::endl;
	std::cout << "Size in Squre ft = " << size_sqrtft << std::endl;
	std::cout << "Adress: " << build_address << std::endl;

}