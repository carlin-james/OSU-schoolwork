/*********************************************************************  
** Program Filename:  queue.cpp
** Author:   James Carlin 
** Date:  5/28/2015
** Description:  Holds function definition, main
** Input:  ints
** Output:  ints
*********************************************************************/
#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
#include "queue.hpp"



int main()
{
	std::srand(time(NULL));
	std::queue<int> userQueue;
	int userPercent;
	int userRemove;
	int choice;

	int averageLength;
while(choice !=2){
	
		
	std::cout <<"Choice 1: Add random numbers to queue" << std::endl;
	std::cout <<"Choice 2: Quit" << std::endl;
	std::cin >> choice;


	if(choice == 1){
	std::cout <<"What percent chance would you like the random number to be added? " << std::endl;
		std::cin >> userPercent;
		add(userQueue, userPercent);

	std::cout <<"What percent chance would you like a random number to be removed? " << std::endl;
		std::cin >> userRemove;
		remove(userQueue, userRemove);

		averageLength += userQueue.size();
		if(userQueue.size() != 0)
		{std::cout <<"Average length = " << averageLength / userQueue.size() << std::endl;}
		

		

	
	}


	if(choice == 2)
	{
	
		std::cout <<"The Program has ended" << std::endl;
	}

	}

}
/*********************************************************************  
** Function:  int add
** Description:  adds int to queue
** Parameters:  queue, int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int add(std::queue <int> &tester, int x)
{
	int userChance;
	int userFinal;
	int rando;

	userChance = 100 / x;

	rando = 1+(rand()&4);

	userFinal = userChance * rando;

	if(userFinal > 20)
	{
		std::cout << "random number not added!" << std::endl;
	}
	else if(userFinal < 20)
	{
		tester.push(rand()& 100);
		std::cout <<"added " << tester.back() << "to queue" << std::endl;
	}



}
/*********************************************************************  
** Function:  int remove
** Description:  removes int to queue
** Parameters:  queue, int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int remove( std::queue <int> &tester, int y)
{
	int newChance;
	int removeFinal;
	int removeRando;

	newChance = 100 / y;

	removeRando = 1+(rand()&4);

	removeFinal = newChance * removeRando;

	if(removeFinal > 20)
	{
		std::cout << "random number not removed!" << std::endl;
		
	}
	else
	{
		tester.pop();
	
		
	}



}