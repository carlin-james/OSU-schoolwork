/*********************************************************************  
** Program Filename:  board.cpp
** Author:   James Carlin 
** Date:  4/9/2015
** Description:  Defines board class member functions and variables
** Input:  
** Output:  
*********************************************************************/
#include "board.hpp"
#include <iostream>

//creates default board object

Board::Board()
	{
		int masterArray[50][30];
		int copyArray[50][30];
	}



/*********************************************************************  
** Function:  addNeighbors
** Description:  finds total number of neighbors for each cell
** then applies the rules
** Parameters:  must be passed number of neighbors
** Pre-Conditions:  Neighbors read from master Array
** Post-Conditions:  Outputs birth and death to copy array
*********************************************************************/ 

void Board::addNeighbors (int arr1[50][30],int arr2[50][30])
	{
		int neighbors = 0;
		for(int i=5; i<45; i++)
		{
			for(int k=5; k<25; k++)
			{
				neighbors = 
				arr1[i][k+1] 
				+ arr1[i-1][k+1]
				+ arr1[i+1][k+1]
				+ arr1[i+1][k]
				+ arr1[i+1][k-1]
				+ arr1[i][k-1]
				+ arr1[i-1][k-1]
				+ arr1[i-1][k];
//applying rules to copyArray
//if == 2, cell stays the same
				if(neighbors == 2)
				{
					arr2[i][k] = arr1[i][k];
				}
//birth of cell
				if(neighbors == 3)
				{
					arr2[i][k] = 1;
				}
//death of cell
				if(neighbors < 2 || neighbors > 3)
				{
					arr2[i][k] = 0;
				}

			}
		}
		
	
	}	

/*********************************************************************  
** Function:  swapArray
** Description:  Swaps master and copy arrays before next generation
** Parameters:  none
** Pre-Conditions:  Changes must have been made to copy array
** Post-Conditions:  Swaps copy array with master array.
*********************************************************************/ 
void Board::swapArray (int arrayA[50][30],int arrayB[50][30])
	{
		for(int i = 5; i <45; i++)
		{
			for(int k =5; k < 25; k++)
			{
				arrayA[i][k] = arrayB[i][k];
			}
		}
		
	}
/*********************************************************************  
** Function:  displayArray
** Description:  using for loops, displays array
** Parameters:  masterArray must be passed
** Pre-Conditions:  swap has to have happened already
** Post-Conditions:  outputs grid to screen
*********************************************************************/ 
void Board::displayArray(int tempArray[50][30])
	{
			for(int i=5; i<45; i++)
		{
			for(int k=5; k<25; k++)
			{
				
				std::cout <<tempArray[i][k] << " ";

			}
			std::cout << std::endl;
		}
	}
/*********************************************************************  
** Function:  blinker
** Description:  using for loops, displays blinker pattern
** Parameters:  passed array and column
** Pre-Conditions:  none
** Post-Conditions:  writes blinker pattern to screen
*********************************************************************/ 
void Board::blinker(int newArray[50][30], int a)
	{
		for(int i=5; i<45; i++)
		{
			for(int k=5; k<25; k++)
			{
			
					newArray[i][k] = 0;
					newArray[a-1][a] = 1;
					newArray[a][a] = 1;
					newArray[a+1][a] = 1;
				
				std::cout <<newArray[i][k] << " ";

			}
			std::cout << std::endl;
		}

	}
/*********************************************************************  
** Function:  glider
** Description:  using for loops, displays glider pattern
** Parameters:  passed array and row
** Pre-Conditions:  none
** Post-Conditions:  writes glider pattern to screen
*********************************************************************/ 
void Board::glider(int newArray[50][30], int a)
	{
		for(int i=5; i<45; i++)
		{
			for(int k=5; k<25; k++)
			{
			
					newArray[i][k] = 0;
					newArray[a][a-2] = 1;
					newArray[a][a-1] = 1;
					newArray[a][a] = 1;
					newArray[a-1][a] = 1;
					newArray[a-2][a-1] = 1;
				
				std::cout <<newArray[i][k] << " ";
				

			}
			std::cout << std::endl;
		
		}
	}





	