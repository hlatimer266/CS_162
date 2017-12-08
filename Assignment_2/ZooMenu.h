/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/7/2017
* Description: Header file for Zoo Menu
**************************************************************/

#ifndef ZOOMENU_HPP
#define ZOOMENU_HPP

#include<iostream>
#include<string>

using namespace std;


//#include "Zoo.hpp"
//#include "Animal.hpp"
//#include "Tiger.hpp"
//#include "Penguin.hpp"
//#include "Turtle.hpp"

class ZooMenu {


public:

	 ZooMenu();

	void startStop();

	void startParms();

	void checkNum(int *animalQty, int *Money, string animalType);

};



#endif
