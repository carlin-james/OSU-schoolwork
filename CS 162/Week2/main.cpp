/*********************************************************************  
** Program Filename:  main.cpp
** Author:   James Carlin 
** Date:  4/9/2015
** Description:  implements user menu
** Input:  Choice
** Output:  Board functions
*********************************************************************/
#include "board.hpp"
#include <iostream>


int main(){

	Board userBoard;
	int choice;
	int userLoop = 0;
	int userCount;
	int blinkerCol;
	int oscilRow;
	int masterArray[50][30];
	int copyArray[50][30];

std::cout <<"This program simulates the game of life" << std::endl;

//while statement to verify input

 	std::cout <<"Please choose from the following menu:" << std::endl;
 	std::cout <<"Choice 1: Blinker/ Fixed Oscillator" << std::endl;
 	std::cout <<"Choice 2: Glider" <<std::endl;
 	std::cout <<"Choice 3: Quit" << std::endl;
 		std::cin >> choice;
//switch statement taking in users choice, and applying the case	
while(choice !=3)
{
 		if(choice==1){
 		
 			std::cout <<"Please enter a column greater than 5 and less than 25" << std::endl;
 				std::cin >> blinkerCol;
 			std::cout <<"How many generations?" << std::endl;
 			std::cin >> userLoop;
 			std::cout << userLoop << std::endl;

 		userBoard.blinker(masterArray, blinkerCol);

		while(userLoop > 0)
		{
						

			
			userBoard.addNeighbors(masterArray,copyArray);
			std::cout <<"break" << std::endl;
			userBoard.swapArray(masterArray,copyArray);
			userBoard.displayArray(masterArray);
			userLoop--;

		
		}
	
}
		
 		
		 	
		 if(choice==2){	
		 		std::cout <<"Please enter a row greater than 5 and less than 45?" << std::endl;
		 				std::cin >> oscilRow;
		 			std::cout <<"How many generations?" << std::endl;
		 			std::cin >> userLoop;
		 			
		 		while(userLoop >0){
		 			userBoard.glider(masterArray, oscilRow);

					userBoard.addNeighbors(masterArray,copyArray);
				
					std::cout <<"break" << std::endl;
					userBoard.swapArray(masterArray,copyArray);
					userBoard.displayArray(masterArray);
					std::cout <<"break" << std::endl;

					userLoop--;
				}

		 		}

		 if(choice==3)
		 	{
		 		std::cout <<"The Program has stopped" << std::endl;
		 	}
			
 	
}
return 0;
}