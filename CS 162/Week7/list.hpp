/*********************************************************************  
** Program Filename:  list.hpp
** Author:   James Carlin 
** Date:  5/18/2015
** Description:  holds member function descriptions
** Input:  
** Output:  
*********************************************************************/
#ifndef LIST_HPP
#define LIST_HPP
#include <iostream>

class List
{
protected:
	struct ListNode
{
	int value;
	ListNode *next;
	ListNode(int value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;

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