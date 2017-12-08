#include "Node.h"
#include <iostream>

Node::Node(int number)
{
	val = number;
	prev = NULL;
	next = NULL;
}

void Node::setNext(Node* n)
{
	next = n;
}

void Node::setPrevious(Node* p)
{
	prev = p;
}

void Node::setValue(int v)
{
	val = v;
}

int Node::getVal()
{
	return val;
}
Node* Node::getNext()
{
	return next;
}

Node* Node::getPrevious()
{
	return prev;
}

