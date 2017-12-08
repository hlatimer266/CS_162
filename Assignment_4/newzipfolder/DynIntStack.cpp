/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/18/2017
* Description: Implementation file for DynIntStack class 
**************************************************************/

#include"DynIntStack.h"
#include "Character.h"

//code borrowed and modified from Staring Out with C++ 
//Early  Objects - by Gaddis
void DynIntStack::push(Character*& val)
{
	top = new StackNode(val, top);
}

void DynIntStack::pop(Character*&val)
{
	StackNode *temp;

	if (isEmpty())
	{
		exit(1);
	}
	else
	{
		val = top->value; 
		temp = top;
		top = top->next;
		delete temp;
	}
}

bool DynIntStack::isEmpty() const
{
	if (!top)
		return true;
	else
		return false;
}
