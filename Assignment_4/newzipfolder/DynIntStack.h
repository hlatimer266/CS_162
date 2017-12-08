/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/18/2017
* Description: Header file for DynIntStack class 
**************************************************************/
#ifndef DYINTSTACK_HPP
#define DYINTSTACK_HPP
#include<iostream>
#include<string>
#include "Character.h"

class DynIntStack
{
private: 
	class StackNode
	{
		friend class DynIntStack;
		Character* value;
		StackNode *next;
		StackNode(Character*& value1,StackNode *next1 = NULL)
		{
			value = value1;
			next = next1;
			
		}
	};
	StackNode *top;
public:
	DynIntStack() { top = NULL; }
	void push(Character*& val);
	void pop(Character*& val);
	bool isEmpty() const;

};

#endif
