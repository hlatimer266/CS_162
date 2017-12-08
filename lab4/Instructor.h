#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP 
#include "Person.h"

class Instructor : public Person
{
protected:
	double rating;
public:
	Instructor(std::string per_name, double rat);
	double getRating();
	void do_work() override;
};

#endif
