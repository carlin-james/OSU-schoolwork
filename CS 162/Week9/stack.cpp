/*********************************************************************  
** Program Filename:  stack.cpp
** Author:   James Carlin 
** Date:  5/28/2015
** Description:  Holds function definition, main
** Input:  user char
** Output:  palindrome
*********************************************************************/


#include <iostream>
#include <stack>
#include "functions.hpp"



int main(){

	char a;
	char b;
	char c;


	std::stack<char> userStack;

	std::cout <<"Please write your first letter" << std::endl;
	std::cin >> a;
	std::cout <<"Please write your second letter" << std::endl;
	std::cin >> b;
	std::cout <<"Please write your final letter" << std::endl;
	std::cin >> c;

	palindrome(userStack, a,b,c);












}
/*********************************************************************  
** Function:  void palindrome
** Description:  takes stack, 3 chars. pushes them into stack. then pops them.
** Parameters:  stack, 3 chars
** Pre-Conditions:  none
** Post-Conditions:  none
*********************************************************************/ 
void palindrome(std::stack <char> tester, char x, char y, char z)
{
	tester.push(x);
	tester.push(y);
	tester.push(z);
	tester.push(y);
	tester.push(x);

	std::cout <<"Your 5 letter palindrome is: " << std::endl;
while(!tester.empty()){
	std::cout << tester.top() << std::endl;
	tester.pop();
}
}