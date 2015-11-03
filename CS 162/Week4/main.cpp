/*********************************************************************  
** Program Filename:  main.cpp
** Author:   James Carlin 
** Date:  4/25/2015
** Description:  Holds switch statement for list program
** Input:  choice, iteration values
** Output:  user display of list
*********************************************************************/

#include <iostream>
#include "items.hpp"
#include "list.hpp"
#include <vector>
#include <string>


int main(){
	int choice;

//creating vector
	List groceries;
	std::string newItem;

	std::cout <<"This program simulates a grocery list" << std::endl;
		 while( choice != 5){
 	std::cout <<"Please choose from the following menu" << std::endl;
 	std::cout <<"Choice 1: Add Regular Item" << std::endl;
 	std::cout <<"Choice 2: Add Store Card Item" << std::endl;
 	std::cout <<"Choice 3: View List" << std::endl;
 	std::cout <<"Choice 4: Delete an item" << std::endl;
 	std::cout <<"Choice 5: Quit" << std::endl;

 		std::cin >> choice;
 //if statements for menu	
if(choice ==1){
	double userPrice = 0;
	int userQuantity = 0;
 			std::cout <<"Please enter the name of the product" << std::endl;
 				std::cin >> newItem;

 			std::cout <<"Please enter the price of the item" << std::endl;
 				std::cin >> userPrice;

 			std::cout <<"Please enter the quantity of the item" << std::endl;
 				std::cin >> userQuantity;
//creating a new item object with user inputs
 				Items testItem(newItem, userPrice, userQuantity);

 				groceries.addItem(testItem);
 			}

if(choice == 2){
	std::string newstoreItem;
	double userstorePrice;
	int userstoreQuantity;
		std::cout <<"Please enter the name of the product" << std::endl;
 				std::cin >> newstoreItem;

 			std::cout <<"Please enter the price of the item" << std::endl;
 				std::cin >> userstorePrice;

 			std::cout <<"Please enter the quantity of the item" << std::endl;
 				std::cin >> userstoreQuantity;
//creating new store card item
 			StoreItems tempItem(newstoreItem, userstorePrice, userstoreQuantity);
 			groceries.addItem(tempItem);

}

if(choice == 3){
//listing contents
		groceries.listContents();
}
if(choice==4)
{
		int userChoice = 0;
//first list contents in current state
	groceries.listContents();
	std::cout <<"Please enter the corresponding number to the product you wish to delete" << std::endl;
	std::cin >> userChoice;
//get iterator from user, then use that to delete correct item
	groceries.deleteItem(userChoice);
//list contents again so user can see new list
	groceries.listContents();

}
if(choice == 5)
{
//end of program
	std::cout <<"The program has stopped" << std::endl;
}





















}

	return 0;
}