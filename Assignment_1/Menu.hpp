/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 10/7/2017
 * Description: Header file for Menu function
 **************************************************************/
 
#ifndef MENU_HPP
#define MENU_HPP 

#include<iostream>
#include<string>

using namespace std;


#include "Grid.hpp"
#include "Ant.hpp"

class Menu {


public:
	

	void startStop();

	void startParms();
	//, int numCols, int antRow, int antCol, int iterations, char direction
	void checkNum(int *Usernum);

};



#endif

