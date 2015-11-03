/*********************************************************************  
** Program Filename:  fifo.cpp
** Author:   James Carlin 
** Date:  5/18/2015
** Description:  shows adding, deleting, and viewing linked list
** Input:  
** Output:  
*********************************************************************/

#include <iostream>
#include "stack.hpp"


int main()
{

Stack userStack(3);
int value;

std::cout<<"First value being PUSHED" << std::endl;
userStack.push(3);
std::cout<<"Second value being PUSHED" << std::endl;
userStack.push(9);
std::cout<<"Third value being PUSHED" << std::endl;
userStack.push(5);

std::cout<<"checking to see if the stack is empty..." << std::endl;

if(!userStack.isEmpty())
{
	std::cout <<"Stack is not empty! " << std::endl;
}
if(userStack.isEmpty())
{
	std::cout <<"The stack is Empty!" << std::endl;
}
std::cout <<"the top of the stack is:" << std::endl;
userStack.peak(5);

std::cout <<"Popping" << std::endl;

userStack.pop(5);
userStack.pop(9);
userStack.pop(3);

if(!userStack.isEmpty())
{
	std::cout <<"Stack is not empty! " << std::endl;
}
if(userStack.isEmpty())
{
	std::cout <<"The stack is Empty!" << std::endl;
}







	return 0;
}