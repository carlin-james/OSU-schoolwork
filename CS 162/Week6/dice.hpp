/*********************************************************************  
** Program Filename:  board.hpp
** Author:   James Carlin 
** Date:  4/9/2015
** Description:  Defines Board class, member functions and variables
** Input:  none
** Output:  board object
*********************************************************************/
#ifndef DICE_HPP
#define DICE_HPP
#include <iostream>
class Dice
{
private:


  
public:
Dice();
Dice(int num, int sides);

/*********************************************************************  
** Function:  int Dice::rollDice()
** Description:  uses random to roll dice, depending on sides from user
** Parameters:  passed number of sides by user
** Pre-Conditions:  Random must be seeded prior
** Post-Conditions:  random number generated
*********************************************************************/ 
int rollDice();
/*********************************************************************  
** Function:  Void Dice::diceInfo
** Description:  sets value for dice object for each character
** Parameters:  number of dice, number of sides
** Pre-Conditions:  Random must be seeded prior
** Post-Conditions:  random number generated based on rolls and sides
*********************************************************************/ 

void diceInfo(int num, int sides);


protected:
		int sides;
		int num;


};


#endif
