/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/7/2017
* Description: Header file for Animal class (base class)
**************************************************************/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<string>

using namespace std;


//#include "Zoo.hpp"
//#include "Animal.hpp"
//#include "Tiger.hpp"
//#include "Penguin.hpp"
//#include "Turtle.hpp"

class Animal {

protected: int Age, Cost, NumBabies, FeedCost, PayOff; 

	public:
		Animal();
		Animal(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a ); 
		virtual void setAge(int animal_age);
		virtual void setCost(int animal_cost);
		virtual void setNumBabies(int animal_babies);
		virtual void setFeedCost(int animal_feed);
		virtual void setPayOff(int animal_payoff);
		virtual int getAge();
		virtual int getCost();
		virtual int getNumBabies();
		virtual int getFeedCost();
		virtual int getPayOff();


};



#endif

