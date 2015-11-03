/*********************************************************************  
** Program Filename:  list.hpp
** Author:   James Carlin 
** Date:  4/25/2015
** Description:  holds member variables and function declarations
** Input:  none
** Output:  none
*********************************************************************/
#ifndef LIST_HPP
#define LIST_HPP

#include <vector>
#include <string>
#include "items.hpp"


class List
{

	

  
public:
		List();
/*********************************************************************  
** Function:  addItems
** Description:  adds item object to vector
** Parameters:  item object
** Pre-Conditions:  called after object is created
** Post-Conditions:  item passed to function, into vector
*********************************************************************/ 
		void addItem(Items);
/*********************************************************************  
** Function:  listContents
** Description:  for loop running through vector
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
		void listContents();
/*********************************************************************  
** Function:  deleteItem
** Description:  deletes item from vector
** Parameters:  passed iterator
** Pre-Conditions:  unchanged vector
** Post-Conditions:  vector missing one value
*********************************************************************/ 	
		void deleteItem(int c);


protected:
std::vector <Items> groceries;	


};


#endif