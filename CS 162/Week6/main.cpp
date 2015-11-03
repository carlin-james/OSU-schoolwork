/*********************************************************************  
** Program Filename:  main.cpp
** Author:   James Carlin 
** Date:  5/5/2015
** Description:  holds testing methods
** Input:  none
** Output:  none
*********************************************************************/

#include <iostream>
#include "characters.hpp"
#include "dice.hpp"
#include <ctime>
#include <cstdlib>


/*********************************************************************  
** Function:  void fight
** Description:  passes two character objects, they fight
** Parameters:  passed character objects
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 


void Fight(Character & userOne, Character & userTwo);

int main()
{
	std::srand(time(NULL));
	int choice;
	
	Barbarian userBarb;
	Barbarian userBarbTwo;
	Goblin		userGoblin;
	Goblin 		userGoblinTwo;
	ReptilePeople  userReptile;
	ReptilePeople	userReptileTwo;
	BlueMen			userBlue;
	BlueMen			userBlueTwo;
	theShadow		userShadow;
	theShadow		userShadowTwo;

while(choice != 6){
	std::cout <<"Please choose from the following menu" << std::endl;
	std::cout <<"Choice 1: Goblin vs characters" << std::endl;
	std::cout <<"Choice 2: Barbarian vs characters" <<std::endl;
	std::cout <<"Choice 3: Reptile People vs characters" <<std::endl;
	std::cout <<"Choice 4: Blue Men vs characters" <<std::endl;
	std::cout <<"Choice 5: The Shadow vs characters" << std::endl;
	std::cout <<"Choice 6: Quit" << std::endl;
	std::cin >> choice;

	if(choice==1)
	{
		Fight(userGoblin, userBarb);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;
		
		Fight(userGoblin, userGoblinTwo);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userGoblin, userShadow);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userGoblin,userReptile);
		std::cout <<" " << std::endl;
		std::cout <<"Final enemy coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userGoblin, userBlue);
		std::cout <<" " << std::endl;
	}
	if(choice==2)
	{
		Fight(userBarb, userBarbTwo);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;
		
		Fight(userBarb, userGoblin);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userBarb, userShadow);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userBarb,userReptile);
		std::cout <<" " << std::endl;
		std::cout <<"Final enemy coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userBarb, userBlue);
		std::cout <<" " << std::endl;
		
	}
	if(choice==3)
	{
		Fight(userReptile, userBarb);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;
		
		Fight(userReptile, userGoblin);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userReptile, userShadow);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userReptile,userReptileTwo);
		std::cout <<" " << std::endl;
		std::cout <<"Final enemy coming up" << std::endl;
		std::cout <<" " << std::endl;



		Fight(userReptile, userBlue);
		std::cout <<" " << std::endl;
	}
	if(choice==4)
	{
		Fight(userBlue, userBarb);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;
		
		Fight(userBlue, userGoblin);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userBlue,userReptile);
		std::cout <<" " << std::endl;
		std::cout <<"Final enemy coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userBlue,userShadow);
		std::cout <<" " << std::endl;
		std::cout <<"Final enemy coming up" << std::endl;
		std::cout <<" " << std::endl;


		Fight(userBlue, userBlueTwo);
		std::cout <<" " << std::endl;
	}
	if(choice==5)
	{
		Fight(userShadow, userBarb);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;
		
		Fight(userShadow, userGoblin);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy is coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userShadow,userReptile);
		std::cout <<" " << std::endl;
		std::cout <<"Next enemy coming up" << std::endl;
		std::cout <<" " << std::endl;

		Fight(userShadow,userShadowTwo);
		std::cout <<" " << std::endl;
		std::cout <<"Final enemy coming up" << std::endl;
		std::cout <<" " << std::endl;


		Fight(userShadow, userBlue);
		std::cout <<" " << std::endl;
		
	}
	if(choice==6)
	{
		std::cout <<"The program has ended" << std::endl;
	}
}

	return 0;
}
/*********************************************************************  
** Function:  void fight
** Description:  passes two character objects, they fight
** Parameters:  passed character objects
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void Fight(Character & userOne, Character & userTwo)
{
	int attack;
	int damage;
	int defend;
	int count = 0;

	while(userTwo.getStrength() >0)
	{
		userTwo.getStrength();
				attack = userOne.attack();
				defend = userTwo.defend();
				damage = (userTwo.getArmor() + defend) - attack;

				std::cout << "The enemy " << userTwo.getName() << " has taken " << damage << " damage!" << std::endl;
				userTwo.setStrength(userTwo.getStrength() -  damage);
				std::cout << "The enemy " << userTwo.getName() <<" has " << userTwo.getStrength() << " health" << std::endl;
			


			
	}
	userOne.respawn();
	userTwo.respawn();
}