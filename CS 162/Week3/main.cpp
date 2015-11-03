/*********************************************************************  
** Program Filename:  main.cpp
** Author:   James Carlin 
** Date:  4/18/2015
** Description:  main function for dice class
** Input:  Choice
** Output:  dice functions
*********************************************************************/
#include "dice.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>				//to seed rand
#include <fstream>				//for writing to file

int main(){
	int diceRoll;
	int results;
	int loadedResults;
	int sides;
	int choice;
	int totalResults;
//seed rand
	std::srand(time(NULL));
	std::ofstream	outputFile;

	
	
	std::cout <<"This program generates a value for dice" << std::endl;
	std::cout <<"How many times would you like to roll the dice?" << std::endl;

		std::cin >>diceRoll;

	std::cout <<"How many sides would you like on your dice?" << std::endl;

		std::cin >> sides;
//load up objects with sides
	Dice userDice1(sides);
	Dice userDice2(sides);
	Dice masterDice(sides);
	LoadedDice loadedDice1(sides);
	LoadedDice loadedDice2(sides);
	LoadedDice newDice(sides);
 
 while( choice != 3){
 	std::cout <<"Please choose from the following menu" << std::endl;
 	std::cout <<"Choice 1: Normal Dice Roll" << std::endl;
 	std::cout <<"Choice 2: Loaded Dice Roll" << std::endl;
 	std::cout <<"Choice 3: Exit" << std::endl;

 		std::cin >> choice;

		
 	switch (choice)
 	{
 		
 		case 1:
 			//open text document
 			outputFile.open ("sums.txt");

 			for(int i=0; i<diceRoll; i++)
		{
		
	
			results = masterDice.rollBothDice(userDice1, userDice2);

			//write to text document
			outputFile << results <<",";
		}
			//close text document
			outputFile.close();	
		std::cout <<"The output has been written on sums.txt" << std::endl;		
 			
 			break;
 			
 		case 2:
 			//open up text document
 			outputFile.open ("loadedSums.txt");				

 			for(int i=0; i<diceRoll; i++)
		{
	
			totalResults = newDice.rollBothDice(userDice1, userDice2);
		
			//write to text document
			outputFile << totalResults <<",";									
			

		}
			//close text document
			outputFile.close();	
		std::cout <<"The output has been written on LoadedSums.txt" << std::endl;		
							
 			
 			break;
 		case 3:
 			std::cout <<"The program has stopped" << std::endl;
 			
 		
 			break;

 			
 		default : 
 		std::cout << "That is an invalid choice" <<std::endl;


		}
}


return 0;
}