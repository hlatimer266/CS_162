/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/10/2017
* Description: Header file for Tiger Class
**************************************************************/

#ifndef PENGUIN_HPP
#define PENGUIN_HPP

#include<iostream>
#include<string>

#include "Animal.h"

using namespace std;

//Age, Cost, NumBabies, FeedCost, PayOff;
class Penguin : public Animal {

private:


public:
	Penguin();
	Penguin(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a);


};


#endif
