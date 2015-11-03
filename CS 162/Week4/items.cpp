/*********************************************************************  
** Program Filename:  items.cpp
** Author:   James Carlin 
** Date:  4/25/2015
** Description:  holds member variables and function defintions for items.cpp
** Input:  none
** Output:  none
*********************************************************************/

#include "items.hpp"
#include <string>

Items::Items()
	{
	
	}
Items::Items (std::string n , double p , int q)
{

	setName(n);
	setQuantity(q);
	setPrice(p);

}




//series of set and get functions

void Items::setName(std::string n)
    {
   		itemName = n;
   	}

void Items::setPrice(double p)
    {
        price = p;
    }

void Items::setQuantity(int q)
    {
        quantity = q;
    }

std::string Items::getName()
    {
        return itemName;
    }

double Items::getPrice()
    {
        return price;
    }

int Items::getQuantity()
    {
        return quantity;
    }

void StoreItems::setName(std::string n)
	{
		itemName = n;
	}

void StoreItems::setPrice(double p)
	{
		price = p * .90;
	}

void StoreItems::setQuantity(int q)
	{
		quantity = q;
	}

std::string StoreItems::getName()
	{
		return itemName;
	}

double StoreItems::getPrice()
	{
		return price;
	}

int StoreItems::getQuantity()
	{
		return quantity;
	}
