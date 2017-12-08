/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/6/2017
* Description: Implementation file for dLinkedList class
**************************************************************/
#include "dLinkedList.h"
#include <iostream>
#include <cstdlib>

dLinkedList::dLinkedList()
{
	
}


void dLinkedList::addToTail(int number)
{

	
	Node *temp = new Node(number);

	if (count <= 0) {
		head = temp;
		tail = temp;
		count++;
	}
	else {
		tail->setNext(temp); 
		temp->setPrevious(tail);
		tail = temp;
		count++;
		
	}


}

void dLinkedList::addToHead(int number) {


	Node *temp1 = new Node(number);

	if (count <= 0) {
		head = temp1;
		tail = temp1;
		count++;
	}

	else {
		head->setPrevious(temp1);
		temp1->setNext(head);
		head = temp1;
		count++;
		
	}
	
}

void dLinkedList::displayList() const
{
	if (count <= 0 )
	{
		std::cout << "Linked list is empty!" << std::endl;
	}
	else {
		Node *nodePtr = head;

		while (nodePtr)
		{
			std::cout << nodePtr->getVal() << "  ";
			nodePtr = nodePtr->getNext();
		}
		
	}

}

void dLinkedList::displayListBack() const {
	
	if (count <= 0)
	{
		std::cout << "Linked list is empty!" << std::endl;
	}
	else {
		Node *nodePtr = tail;
		while (nodePtr) {

			std::cout << nodePtr->getVal() << " ";
			nodePtr = nodePtr->getPrevious();
			
		}
	}
}

void dLinkedList::delHead()
{
	
	if (count <= 0)
	{
		std::cout << "Linked list is empty!" << std::endl;
	}
	else {
			Node *current = head;
		
			head = head->getNext();
			if (head == NULL) {
				tail = NULL;
				count--;
			}
			else {
				
				head->setPrevious(NULL);
				delete current;
				count--;
				
			}
		}
			
}

void dLinkedList::delTail()
{	
	if (count <= 0)
	{
		std::cout << "Linked list is empty!" << std::endl;
	}
	else {
		Node *current = tail;
		tail->getPrevious();
		if (tail == NULL)
		{
			head = NULL;
			count--;
		}
			
		else {
			
			tail->setNext(NULL);
			count--;
			delete current;
		}
	
		
	}
}

int dLinkedList::getHeadValue() {

	return head->getVal();
}

int dLinkedList::getTailValue() {

	return tail->getVal();

}

dLinkedList::~dLinkedList()
{

	
		Node *current = head;
		for (int i = 0; i < count - 1; i++) {
			current = head;
			head = head->getNext();
			head->setPrevious(NULL);
			delete current;
		}

		
	
	
}
	
	
	 

