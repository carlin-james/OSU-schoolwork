/*********************************************************************  
** Program Filename:  lab1_2.cpp
** Author:   James Carlin 
** Date:  4/2/2015
** Description:  Calls void f() and g() functions
** Input:  none
** Output:  none
*********************************************************************/
#include "f.h"
#include "g.h"
#include <iostream>

void f();

void g();

int main()
{


/*********************************************************************  
** Function:  void f()
** Description:  Outputs a statement declaring its in f function
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
			std::cout <<"First in void f()" << std::endl;
			f();
 			
 		

/*********************************************************************  
** Function:  void g()
** Description:  Outputs a statement declaring its in g function
** Parameters:  none
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
			std::cout <<"Then in void g()" << std::endl;
			g();

			std::cout <<"Now back in main" << std::endl;

 			 			
 	

return 0;
}