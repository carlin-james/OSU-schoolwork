/*********************************************************************  
** Program Filename:  fifo.cpp
** Author:   James Carlin 
** Date:  5/18/2015
** Description:  shows adding, deleting, and viewing linked list
** Input:  
** Output:  
*********************************************************************/

#include <iostream>
#include "listTwo.hpp"


int main()
{

	List userList;
userList.add(3);
userList.add(4);
userList.add(5);
std::cout <<"Here are the numbers in the list" << std::endl;
userList.display();
std::cout <<"Removing the first added number" << std::endl;
userList.remove(3);
std::cout <<"Displaying final list" << std::endl;
userList.display();










	return 0;
}