/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/7/2017
* Description: Header file for Animal class (base class)
**************************************************************/

#include<iostream>
#include "Animal.h"


//int Age, Cost, NumBabies, FeedCost, PayOff;
Animal::Animal(){}
Animal::Animal(int age_a, int cost_a, int numbabes_a, int feedcost_a, int payoff_a) {

	Age = age_a; 
	Cost = cost_a;
	NumBabies = numbabes_a;
	FeedCost = feedcost_a;
	PayOff = payoff_a;

}

 void Animal::setAge(int animal_age){
	Age = animal_age;
}

void Animal::setCost(int animal_cost) {
	Cost = animal_cost;

}
void Animal::setNumBabies(int animal_babies){
	NumBabies = animal_babies;
}
void Animal::setFeedCost(int animal_feed) {
	FeedCost = animal_feed; 

}
void Animal::setPayOff(int animal_payoff) {
	PayOff = animal_payoff;

}
int Animal::getAge() {
	return Age;
}
int Animal::getCost() {
	return Cost;
}
int Animal::getNumBabies() {
	return NumBabies;
}
int Animal::getFeedCost() {
	return FeedCost;
}
int Animal::getPayOff() {
	return PayOff;
}