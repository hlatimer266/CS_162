/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/23/2017
* Description: Implementation file for Instructor class
**************************************************************/

#include "Instructor.h"
#include "Person.h"

Instructor::Instructor(std::string per_name, double rat) : Person (per_name)
{
	rating = rat;
}

double Instructor::getRating()
{
	return rating;
}

void Instructor::do_work()
{
	int hours_worked = rand() % 8 + 4;
	std::cout << p_name << " garded papars for " << hours_worked << " hours" << std::endl;
}




