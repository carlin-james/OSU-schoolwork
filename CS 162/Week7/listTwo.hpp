/*********************************************************************  
** Program Filename:  listTwo.hpp
** Author:   James Carlin 
** Date:  5/18/2015
** Description:  holds member function descriptions
** Input:  
** Output:  
*********************************************************************/
#ifndef LISTTWO_HPP
#define LISTTWO_HPP
#include <iostream>

class List
{
protected:
	struct ListNode
{
	int value;
	ListNode *next;
	ListNode *previous;
	ListNode(int value1, ListNode *previous1 = NULL, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
			previous = previous1;

		}

	
};
ListNode *head;
public:
	List()
	{
		head = NULL;
	}
	~List();
	void add(int num);
	void remove(int num);
	void display() const;


};
#endif