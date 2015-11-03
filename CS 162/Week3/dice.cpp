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
#include <fstream>



//default constructor
Dice::Dice()
	{
		this ->sides = 6;
	}
//constructor taking sides
Dice::Dice(int sides)
{
	this ->sides = sides;
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
	
	return rand()%sides+1;
	
}












	