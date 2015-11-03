#include "stack.hpp"

Stack::Stack(int size)
{
	this ->size = size;
	sArray = new int[size];
	top = 0;
}
void Stack::push(int value)
{
	
		sArray[top] = value;
		top++;
}
bool Stack::isEmpty()
{
	if(top == 0)
		return true;
	else
		return false;
}
void Stack::pop(int value)
{
	top--;
	value = sArray[top];
	std::cout << value << std::endl;
}
void Stack::peak(int value)
{
	std::cout << value << std::endl;
}