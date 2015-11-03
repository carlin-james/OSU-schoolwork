/*********************************************************************  
** Program Filename:  board.cpp
** Author:   James Carlin 
** Date:  4/9/2015
** Description:  Defines board class member functions and variables
** Input:  
** Output:  
*********************************************************************/
#include "dice.hpp"
#include <iostream>
#include <cstdlib>




//default constructor
Dice::Dice()
	{
		this ->sides = 6;
	}
//constructor taking sides
Dice::Dice(int num, int sides)
{
	this ->sides = sides;
	this ->num = num;
}
/*********************************************************************  
** Function:  int Dice::rollDice()
** Description:  uses random to roll dice, depending on sides from user
** Parameters:  passed number of sides by user
** Pre-Conditions:  Random must be seeded prior
** Post-Conditions:  random number generated
*********************************************************************/ 
int Dice::rollDice()
{
	int userRoll;
	for(int i=0; i < num; i++)
	{
	
		userRoll += rand()%sides+1;
		return userRoll;
	}
	
}
/*********************************************************************  
** Function:  Void Dice::diceInfo
** Description:  sets value for dice object for each character
** Parameters:  number of dice, number of sides
** Pre-Conditions:  Random must be seeded prior
** Post-Conditions:  random number generated based on rolls and sides
*********************************************************************/ 
void Dice::diceInfo(int num, int sides)
{
	this ->sides = sides;
	this ->num = num;
}












	