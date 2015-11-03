
/*********************************************************************  
** Program Filename:  queue.hpp
** Author:   James Carlin 
** Date:  5/28/2015
** Description:  holds member variables and function declarations
** Input:  none
** Output:  none
*********************************************************************/


#include <iostream>
#include <ctime>

int Fibonacci(const int &n);
int fib(int x);
int rfactorial (int n);
int factorialHelper (int n, int result); 
int factorial(int n);



int main()
{
clock_t t;
clock_t e;
clock_t b;
clock_t c;

e = clock();
Fibonacci(60);
e = clock() - e;
std::cout << "iterative fibonacci:  " << e << std::endl;

t = clock();
fib(30);
t = clock() - t;
std::cout << "recursive fibonacci: " << t << std::endl;


b = clock();
rfactorial(60);
b = clock() - b;
std::cout << "non-tail factorial: " << b << std::endl;

c = clock();
factorial(60);
c = clock() - c;
std::cout << "tail fibonacci: " << c << std::endl;





















return 0;

}






//none recursive fron linked website in assignment
/*********************************************************************  
** Function:  Fibonacci
** Description:  non recursive function for fibonacci problemr
** Parameters:  int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int Fibonacci(const int &n) 
{  int first =0;  
	int second=1;  
	int counter=2; 
while(counter < n) 
{ 

int temp=second;  
	second=first+second; 
	first=temp; 
	++counter;  } 
if(n==0) 
return 0; 
else  return first+second;  }

//recursive found on stackoverflow
/*********************************************************************  
** Function:  Fib
** Description:   recursive function for fibonacci problemr
** Parameters:  int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int fib(int x) 
{ if (x == 0) return 0; 
if (x == 1) return 1; 
return fib(x-1)+fib(x-2); }

//non tail from assignment paper
/*********************************************************************  
** Function:  rfactorial
** Description:   recursive function for factorial problem
** Parameters:  int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int rfactorial (int n) 
{      
if(n==1)         
{ return 1; }     
else      
 {return n * rfactorial(n-1); }
}

//tail recursive from assignment paper
/*********************************************************************  
** Function:  factorial helper
** Description:   recursive function for factorial problemr
** Parameters:  int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int factorialHelper (int n, int result) 
{      if (n == 1)
           return result;
                 else
                       return factorialHelper(n-1, n * result); 
               } 
/*********************************************************************  
** Function:  factorial 
** Description:   recursive function for factorial problem
** Parameters:  int
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
int factorial(int n) 
 {      return factorialHelper(n,1); } 