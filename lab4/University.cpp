/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/23/2017
* Description: Implementation file for University class
**************************************************************/
#include <iostream>
#include <string>
#include "University.h"
#include "Building.h"
#include "Person.h"

University::University()
{
	numStudents = 2;
	numInstructors = 2;
	numBuildings = 2;

	newStudent = new Student("Karl Kastle", 3.5);
	osu_students[0] = newStudent;

	newStudent = new Student("Elliot Smyfth", 3.3);
	osu_students[1] = newStudent;

	newInstructor = new Instructor("Dr.Lim", 4.4);
	osu_faculty[0] = newInstructor;

	newInstructor = new Instructor("Dr.Latimer", 4.4);
	osu_faculty[1] = newInstructor;

	newBuilding = new Building("Adams Hall", 11168, "606 SW 15TH ST CORVALLIS, OR 97331");
	osu_buildings[0] = newBuilding; 

	newBuilding = new Building("Austin Hall", 107613, "2751 SW JEFFERSON WAY CORVALLIS, OR 97331");
	osu_buildings[1] = newBuilding;

}

void University::getAllBuildNames()
{
	for (int i = 0; i < numBuildings; ++i)
	{
		osu_buildings[i]->buildInformation();
	}
	
}

void University::getAllPeople()
{
	for (int i = 0; i < numStudents; ++i)
	{
		std::cout << "Student Name: " << osu_students[i]->getName() << " Age: " << osu_students[i]->getAge() <<" and has a GPA of " << osu_students[i]->getGPA() << std::endl;
	}

	for (int i = 0; i < numInstructors; ++i)
	{
		std::cout << "Faculty Name:" << osu_faculty[i]->getName() << " Age:  " << osu_faculty[i]->getAge() << " and has a rating of " << osu_faculty[i]->getRating() << std::endl;
	}

}

void University::whoDoesWork()
{
	std::string facOrStu;
	std::cin.clear();
	std::cout << "type p for Facutly to work or s for Student to work" << std::endl;
	std::cin >> facOrStu;
	bool valid_2 = false;

	while (valid_2 == false) {
		std::cin.clear();
		if (facOrStu.length() > 1) {
			valid_2 = false;
			std::cin.clear();
			std::cout << "Please enter a either p or s " << std::endl;
			std::cin >> facOrStu;
		}
		else if (!isalpha(facOrStu.at(0))) {
			valid_2 = false;
			std::cin.clear();
			std::cout << "Please enter a either p or q  " << std::endl;
			std::cin >> facOrStu;
		}
		else
		{
			char c = tolower(facOrStu.at(0));
			if (c == 'p' || c == 's')
				valid_2 = true;
			else {
				valid_2 = false;
				std::cin.clear();
				std::cout << "Please enter a either p or s  " << std::endl;
				std::cin >> facOrStu;
			}
		}
	}
	if (facOrStu == "s")
		osu_students[rand() % 1]->do_work();
	else if (facOrStu == "p")
		osu_faculty[rand() % 1]->do_work();
		

	
}

University::~University()
{
	delete newStudent;
	delete newBuilding;
	delete newInstructor;

	delete osu_students[0];
	delete osu_students[1];
	delete osu_students;

	delete osu_faculty[0];
	delete osu_faculty[1];
	delete osu_faculty;

	delete osu_buildings[0];
	delete osu_buildings[1];
	delete osu_buildings;
}