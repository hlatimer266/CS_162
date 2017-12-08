/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/23/2017
* Description: Header file for University class
**************************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP 

#include <iostream>
#include <string>
#include "University.h"
#include "Building.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"

class University {

private:
	std::string name = "Oregon State University";

	Building **osu_buildings = new Building*[2];
	Person **osu_students = new Person*[2];
	Person **osu_faculty = new Person*[2];

	Student *newStudent = nullptr;
	Instructor *newInstructor = nullptr;
	Building *newBuilding = nullptr;
	
	int numStudents, numInstructors, numBuildings; 

public:
	University();

	void getAllBuildNames();

	void getAllPeople();

	void whoDoesWork();

	~University();

};

#endif
