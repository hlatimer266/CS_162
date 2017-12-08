#ifndef STUDENT_HPP
#define STUDENT_HPP 

#include <iostream>
#include <string>

#include "Person.h"

class Student : public Person
{
protected:
	double GPA;
public:
	Student(std::string per_name, double gpa);
    double getGPA() override;
	void do_work() override;
	
};

#endif
