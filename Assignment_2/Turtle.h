/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/10/2017
* Description: Header file for Turtle Class
**************************************************************/

#ifndef TURTLE_HPP
#define TURTLE_HPP

#include<iostream>
#include<string>
#include "Animal.h"
#include "Turtle.h"

using namespace std;

//Age, Cost, NumBabies, FeedCost, PayOff;
class Turtle : public Animal {

private:


public:
	Turtle();
	Turtle(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a);

};


#endif
