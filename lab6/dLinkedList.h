/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/6/2017
* Description: Header file for dLinkedList class
**************************************************************/
#include"Node.h"

class dLinkedList {

private:

	int count = 0;

	Node *head = NULL;
	Node *tail = NULL;


public:
	dLinkedList();
	void addToHead(int);
	void addToTail(int);
	void displayList() const;
	void displayListBack() const;
	void delTail();
	void delHead();
	int getHeadValue();
	int getTailValue();
	~dLinkedList();


}; 
