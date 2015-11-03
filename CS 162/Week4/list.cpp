/*********************************************************************  
** Program Filename:  list.cpp
** Author:   James Carlin 
** Date:  4/25/2015
** Description:  holds member variables and function defintions for list.cpp
** Input:  none
** Output:  none
*********************************************************************/

#include "list.hpp"
#include "items.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

List::List()
{

}
/*********************************************************************  
** Function:  addItems
** Description:  adds item object to vector
** Parameters:  item object
** Pre-Conditions:  called after object is created
** Post-Conditions:  item passed to function, into vector
*********************************************************************/ 
void List::addItem(Items items)
	{
		groceries.push_back(items);
	}
/*********************************************************************  
** Function:  listContents
** Description:  for loop running through vector
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void List::listContents()
	{
		int t = 0;
		for (int j=0; j < groceries.size(); j++){
			std::cout << "#" << t << std::endl;
			std::cout <<"Name " <<  groceries[j].getName() << std::endl;
			std::cout <<"Price $" << std::setprecision(3) << groceries[j].getPrice() << std::endl;
			std::cout <<"Quantity " << groceries[j].getQuantity() << std::endl;
			t++;
		}
	}
/*********************************************************************  
** Function:  deleteItem
** Description:  deletes item from vector
** Parameters:  passed iterator
** Pre-Conditions:  unchanged vector
** Post-Conditions:  vector missing one value
*********************************************************************/ 	
void List::deleteItem(int c)
{
	groceries.erase(groceries.begin() + c);
}