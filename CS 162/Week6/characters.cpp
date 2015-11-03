/*********************************************************************  
** Program Filename:  characters.cpp
** Author:   James Carlin 
** Date:  5/6/2015
** Description:  holds class function definitions
** Input:  none
** Output:  none
*********************************************************************/

#include "characters.hpp"
#include <cstdlib>
#include "dice.hpp"



int Character::getArmor()
{
	return armor;
}
int Character::getStrength()
{
	return strength;
}
void Character::setArmor(int a)
{
	armor = a;
}
void Character::setStrength(int s)
{
	strength = s;
}

std::string Character::getName()
{
	return name;
}
int Character::attack()
{
	return attackingDice.rollDice();
}
int Character::defend()
{
	return defendingDice.rollDice();
}
/*********************************************************************  
** Function:  void respawn
** Description:  resets character attributes, used to testing
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void Character::respawn()
{
	armor = 0;
	strength = 0;
}
Goblin::Goblin() : Character()
{
	name = "goblin";
	attackingDice.diceInfo(2,6);
	defendingDice.diceInfo(1,6);
	achillies = 1;
	strength = 8;
	armor = 3;
	
}
/*********************************************************************  
** Function:  goblin::attack
** Description:  applies achillies effect to goblin
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int Goblin::attack()
{
	//int goblinAttack;

	//goblinAttack = attackingDice.rollDice();
	//if(attackingDice.rollDice() == 12){
		//achillies = .5;
		//return attackingDice.rollDice();
	//}
	//else
		return attackingDice.rollDice();

}
void Goblin::respawn()
{
	strength = 8;
	achillies = 1;
	armor =3;
}


Barbarian::Barbarian() : Character()
{
	name = "Barbarian";
	attackingDice.diceInfo(2,6);
	defendingDice.diceInfo(2,6);
	strength = 12;
	armor = 0;

}
/*********************************************************************  
** Function:  void respawn
** Description:  resets character attributes, used to testing
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void Barbarian::respawn()
{
	strength =12;
	armor = 0;
}
ReptilePeople::ReptilePeople() : Character()
{
	attackingDice.diceInfo(3,6);
	defendingDice.diceInfo(1,6);
	strength = 18;
	armor = 7;
	name = "Reptile";
}
/*********************************************************************  
** Function:  void respawn
** Description:  resets character attributes, used to testing
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void ReptilePeople::respawn()
{
	strength = 18;
	armor = 7;
}
BlueMen::BlueMen() : Character()
{
	attackingDice.diceInfo(2,10);
	defendingDice.diceInfo(3,6);
	strength = 12;
	armor = 3;
	name = "BlueMen";
}
/*********************************************************************  
** Function:  void respawn
** Description:  resets character attributes, used to testing
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void BlueMen::respawn()
{
	strength = 12;
	armor = 3;
}
theShadow::theShadow() : Character()
{
	attackingDice.diceInfo(2,10);
	defendingDice.diceInfo(1,6);
	name ="theShadow";

	strength = 12;
}
/*********************************************************************  
** Function:   theShadow::defend
** Description:  applies the chance to miss
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int theShadow::defend()
{
	
return defendingDice.rollDice();
	
}
/*********************************************************************  
** Function:  void respawn
** Description:  resets character attributes, used to testing
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void theShadow::respawn()
{
	strength = 12;
}