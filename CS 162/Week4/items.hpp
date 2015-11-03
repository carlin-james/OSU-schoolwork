/*********************************************************************  
** Program Filename:  items.hpp
** Author:   James Carlin 
** Date:  4/25/2015
** Description:  holds member variables and function declarations
** Input:  none
** Output:  none
*********************************************************************/
#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <string>

//parent class
class Items
{
private:


  
public:

//creating default item object with default values
Items();
	//item object taking name, price, and quantity
Items (std::string, double, int);


   		void setName(std::string);

        void setPrice(double);

        void setQuantity(int);

        std::string getName();

        double getPrice();

        int getQuantity();



protected:
		std::string itemName;
		double price;
		int quantity;



};
//child class
class StoreItems : public Items
{
private:

public:
	StoreItems() : Items()
	{

	}
//constructor accepting values
	StoreItems (std::string n , double p, int q)
	{
		setName (n);
	setQuantity(q);
	setPrice(p);
	}
//set and get functions
		void setName(std::string);

		void setPrice(double);

        void setQuantity(int);

        std::string getName();

        double getPrice();

        int getQuantity();

protected:

};




#endif