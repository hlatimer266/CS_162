/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/6/2017
* Description: Implementation file for Queue class
**************************************************************/
#include "Queue.h"
#include <iostream>

Queue::Queue()
{
};

bool Queue::isEmpty()
{
	if (count <= 0)
		return true;
	else
		return false;
};

void Queue::addBack(int val)
{
	if (head == NULL)
	{
		QueueNode* new_node = new QueueNode;
		new_node->val = val;
		new_node->next = new_node->prev = new_node;
		head = new_node;
		return;
	}
	else
	{
		// If list is not empty

		/* Find last node */
		QueueNode* last = head->prev;

		// Create Node dynamically
		QueueNode* new_node = new QueueNode;
		new_node->val = val;

		// Start is going to be next of new_node
		new_node->next = head;

		// Make new node previous of start
		head->prev = new_node;

		// Make last preivous of new node
		new_node->prev = last;

		// Make new node next of old last
		last->next = new_node;
		count++;
	}
};

int Queue::getFront()
{
	if (count <= 0)
		std::cout << "List is empty" << std::endl;
	else
	{
		QueueNode* temp = head;
		temp->next;

		return temp->val;
	}
};

void Queue::removeFront()
{
	if (count <= 0)
		std::cout << "List is empty" << std::endl;
	else
	{
		QueueNode* ptr = NULL;

		ptr = head;
		head = ptr->next;
		head->prev = ptr->prev;
		ptr->prev->next = head;
		delete ptr;
	}
}

void Queue::printQueue()
{
	if (count <= 0)
		std::cout << "List is empty" << std::endl;
	else
	{
		QueueNode* temp = head;
		if (head != NULL)
		{
			do
			{
				std::cout << ("%d ", temp->val) << " ";
				temp = temp->next;
			}
			while (temp != head);
		}
	}
};