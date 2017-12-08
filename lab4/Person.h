#ifndef PERSON_HPP
#define PERSON_HPP 

#include <iostream>
#include <string>
#include "Person.h"

class Person
{
protected:
	std::string p_name;
	int p_age;

public:
	Person(std::string per_name);

	virtual void do_work();

	virtual int getAge();
	virtual std::string getName();
	virtual double getGPA();
	virtual double getRating();
	
	
};



#endif
