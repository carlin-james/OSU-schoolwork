/*********************************************************************  
** Program Filename:  pointSort.cpp
** Author:   James Carlin 
** Date:  4/2/2015
** Description:  Takes 3 ints from user and swaps their value 
** Input:  3 ints
** Output:  Ints in ascending order
*********************************************************************/

 #include <iostream>

/*********************************************************************  
** Function:  void swap
** Description:  Swaps values for int pointers
** Parameters:  3 pointers to ints
** Pre-Conditions:  integers must be passed by reference
** Post-Conditions:  none
*********************************************************************/ 

 void swap(int *a, int *b, int *c); // prototype


int main()

{

//variables to get data from user
	int userNum1,
		userNum2,
		userNum3;
//cout and cin statements 
	std::cout << "Please enter the first integer" << std::endl;
		std::cin >>userNum1;

	std::cout <<"Please enter the second integer" << std::endl;
		std::cin >> userNum2;

	std::cout <<"Please enter the third integer" << std::endl;
		std::cin >> userNum3;

//outputting before passing values into function

	std::cout <<"The integers in the order entered are:" << std::endl;

			std::cout << userNum1 << std::endl;
			std::cout << userNum2 << std::endl;
			std::cout << userNum3 << std::endl;

//passing as ref to function

		swap(&userNum1, &userNum2, &userNum3);

//outputting values after swap function
	std::cout <<"The integers in the correct order are:" << std::endl;
		std::cout << userNum1 << std::endl;
		std::cout << userNum2 << std::endl;
		std::cout << userNum3 << std::endl;
		
		
return 0;
}
/*********************************************************************  
** Function:  void swap
** Description:  Swaps values for int pointers
** Parameters:  3 pointers to ints
** Pre-Conditions:  integers must be passed by reference
** Post-Conditions:  none
*********************************************************************/ 

void swap(int *a, int *b, int *c)
	{
	int temp;

		if(*a > *b)
		{
			temp = *a;
			*a = *b;
			*b = temp;
		}

		if( *b > *c)
		{
			temp = *b;
			*b = *c;
			*c = temp;

		}

		if(*c < *a)
		{
			temp = *a;
			*a = *c;
			*c = temp;
		}


	}
