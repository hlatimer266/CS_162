/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/10/2017
* Description: Header file for Tiger Class
**************************************************************/

#ifndef TIGER_HPP
#define TIGER_HPP

#include<iostream>
#include<string>

#include "Animal.h"

using namespace std;

//Age, Cost, NumBabies, FeedCost, PayOff;
class Tiger : public Animal {

private:
	

public:
	Tiger();
	Tiger(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a);


};


#endif
