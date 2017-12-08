#include"DynIntStack.h"
#include "Character.h"


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
