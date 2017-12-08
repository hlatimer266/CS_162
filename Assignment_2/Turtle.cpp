/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/10/2017
* Description: Implementation  file for Turtle Class
**************************************************************/

#include<iostream>
#include<string>

#include "Animal.h"
#include "Turtle.h"

using namespace std;


//int age, cost_animal, babies, cost, payoff;
Turtle::Turtle() {}
Turtle::Turtle(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a) : Animal( age_a,  cost_a,  numbabes_a,  feedcost_a,  payoff_a) {}