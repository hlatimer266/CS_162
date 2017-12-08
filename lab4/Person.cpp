#include<iostream>
#include<string>
#include "Person.h"

Person::Person(std::string per_name)
{
	p_name = per_name;
	p_age = rand() % 4 + 18;
}

void Person::do_work()
{
	
	
}

int Person::getAge()
{
	return p_age;
}

std::string Person::getName()
{
	return p_name;
}

 double Person::getGPA()
{
	 return 10;
}
 double Person::getRating()
{
	 return 10;
}



