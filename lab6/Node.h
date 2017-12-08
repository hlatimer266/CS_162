/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/2/2017
* Description: Header file for Node class
**************************************************************/

#ifndef NODE_HPP
#define NODE_HPP
#include <cstddef>

class Node
{
private: 
	Node *next = NULL; 
	Node *prev = NULL;
	int val;
public: 
	Node(int number);
	void setNext(Node *n);
	void setPrevious(Node *p);
	void setValue(int v); 

	int getVal();
	Node *getNext();
	Node *getPrevious();
};

#endif 