#include<iostream>
#include<string>

#include "Animal.h"
#include "Penguin.h"

using namespace std;



Penguin::Penguin(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a) : Animal(age_a, cost_a, numbabes_a, feedcost_a, payoff_a) {}