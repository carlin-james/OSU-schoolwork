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
Dice(int sides);

/*********************************************************************  
** Function:  int Dice::rollDice()
** Description:  uses random to roll dice, depending on sides from user
** Parameters:  passed number of sides by user
** Pre-Conditions:  Random must be seeded prior
** Post-Conditions:  random number generated
*********************************************************************/ 
int rollDice();
/*********************************************************************  
** Function:  int Dice::rollBothDice()
** Description:  Rolls two dice, adds results together
** Parameters:  two Dice objects must be passed
** Pre-Conditions:  Dice objects must be initialized
** Post-Conditions:  Adds results
*********************************************************************/ 


protected:
		int sides;


};


#endif
