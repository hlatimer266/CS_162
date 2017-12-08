/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/6/2017
* Description: Header file for Queue class
**************************************************************/
#include<iostream>
#include "QueueNode.h"

#ifndef QUEUE_HPP
#define  QUEUE_HPP

class Queue
{
private:
	QueueNode* head = NULL;
	int count = 0;
public:
	Queue();
	bool isEmpty();
	void addBack(int val);
	int getFront();
	void removeFront();
	void printQueue();
};

#endif 