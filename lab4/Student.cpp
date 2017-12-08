#include <iostream>
#include <string>

#include "Person.h"
#include "Student.h"

Student::Student(std::string per_name, double gpa) : Person(per_name)
{
	GPA = gpa;
};

 double Student::getGPA()
{
	return GPA;
};

void Student::do_work()
{
	int hours_worked = rand() % 8 + 4;
	std::cout << p_name << " did " << hours_worked << "hours of home work" << std::endl;
}


