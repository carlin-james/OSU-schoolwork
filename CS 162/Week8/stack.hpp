/*********************************************************************  
** Program Filename:  list.hpp
** Author:   James Carlin 
** Date:  5/18/2015
** Description:  holds member function descriptions
** Input:  
** Output:  
*********************************************************************/
#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>

class Stack
{
private:
	int *sArray;
	int size;
	int top;
public:
	Stack(int size);
	~Stack()
	{
		delete[] sArray;
	}
void push(int value);
void pop(int value);
bool isEmpty();
void peak(int value);


};
#endif