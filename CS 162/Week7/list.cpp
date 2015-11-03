/*********************************************************************  
** Program Filename:  list.cpp
** Author:   James Carlin 
** Date:  5/18/2015
** Description:  holds member function definitions
** Input:  
** Output:  
*********************************************************************/
#include "list.hpp"
#include <iostream>
/*********************************************************************  
** Function:  void add
** Description:  adds node to list
** Parameters:  passed a num
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void List::add(int num)
{
	if(head==NULL)
	{
		head= new ListNode(num);
	}
	else
	{
		ListNode *ptr = head;
			while(ptr ->next != NULL)
			{
				ptr = ptr ->next;
			}
			ptr ->next = new ListNode(num);
	}
}
/*********************************************************************  
** Function:  void remove
** Description:  removes node from list
** Parameters:  passed a num
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void List::remove(int num)
{
	ListNode *ptr;
	ListNode *previousNode;

	if(head ->value == num)
	{
		ptr = head;
		head = head->next;
		delete ptr;
	}
	else
		ptr = head;
			while(ptr != NULL && ptr->value !=num)
			{
				previousNode = ptr;
				ptr = ptr->next;;
			}
	if(ptr)
	{
		previousNode->next = ptr->next;
		delete ptr;
	}
}
/*********************************************************************  
** Function:  void display
** Description:  displays list
** Parameters:  passed a num
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void List::display() const
{
	ListNode *ptr = head;
	while(ptr)
	{
		std::cout << ptr ->value << " " << std::endl;
		ptr = ptr->next;
	}
}
//destructor
List::~List()
{
	ListNode *ptr = head;
	while(ptr != NULL)
	{
		ListNode * garbage = ptr;
		ptr = ptr ->next;
		delete garbage;
	}
}