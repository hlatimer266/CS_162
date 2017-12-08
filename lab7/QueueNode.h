/**************************************************************
* * Author: Harrison Latimer
* * Date: 11/6/2017
* Description: Header file for QueueNode class
**************************************************************/
#ifndef QUEUENODE_HPP
#define  QUEUENODE_HPP

struct QueueNode
{
	int val;
	QueueNode* next;
	QueueNode* prev;
};

#endif
