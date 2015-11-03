/*********************************************************************  
** Program Filename:  board.hpp
** Author:   James Carlin 
** Date:  4/9/2015
** Description:  Defines Board class, member functions and variables
** Input:  none
** Output:  board object
*********************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>



class Board
{
private:
	
	int neighbors;
  
public:
    Board();
/*********************************************************************  
** Function:  addNeighbors
** Description:  finds total number of neighbors for each cell
** then applies the rules
** Parameters:  must be passed number of neighbors
** Pre-Conditions:  Neighbors read from master Array
** Post-Conditions:  Outputs birth and death to copy array
*********************************************************************/    
   void addNeighbors (int arr1[50][30],int arr2[50][30]);
/*********************************************************************  
** Function:  swapArray
** Description:  Swaps master and copy arrays before next generation
** Parameters:  none
** Pre-Conditions:  Changes must have been made to copy array
** Post-Conditions:  Swaps copy array with master array.
*********************************************************************/ 
   void swapArray (int arrayA[50][30],int arrayB[50][30]);
/*********************************************************************  
** Function:  displayArray
** Description:  using for loops, displays array
** Parameters:  masterArray must be passed
** Pre-Conditions:  swap has to have happened already
** Post-Conditions:  outputs grid to screen
*********************************************************************/ 
   void displayArray(int tempArray[50][30]);
/*********************************************************************  
** Function:  blinker
** Description:  using for loops, displays blinker pattern
** Parameters:  passed array and column
** Pre-Conditions:  none
** Post-Conditions:  writes blinker pattern to screen
*********************************************************************/ 
   void blinker(int newArray[50][30], int a);
/*********************************************************************  
** Function:  glider
** Description:  using for loops, displays glider pattern
** Parameters:  passed array and row
** Pre-Conditions:  none
** Post-Conditions:  writes glider pattern to screen
*********************************************************************/ 
   void glider(int newArray[50][30], int a);





    

};

#endif
