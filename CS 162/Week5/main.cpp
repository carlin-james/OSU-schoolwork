/*********************************************************************  
** Program Filename:  main.cpp
** Author:   James Carlin 
** Date:  5/3/2015
** Description:  holds menu
** Input:  encryption keys
** Output:  output file
*********************************************************************/

#include <iostream>
#include <fstream>
#include "fileRead.hpp"

int main()
{
		int choice;
		int userKey;
		int userNewKey;
			std::ifstream inputFile;
			std::ofstream outputFile;
			inputFile.open("inFile.txt");
			outputFile.open("outFile.txt");
//menu for program, using if statements

	while(choice !=5){
			std::cout <<"Please choose from the following menu" << std::endl;
		std::cout <<"Choice 1: Copy" << std::endl;
		std::cout <<"Choice 2: Encrypt with key:" << std::endl;
		std::cout <<"Choice 3: Change to all capital letters" << std::endl;
		std::cout <<"Choice 4: Encrypt, capitalize, and add a space" <<std::endl;
		std::cout <<"Choice 5: Close files and quit" << std::endl;
		std::cin >> choice;


		if(choice ==1)
		{
			NormalFilter copyFilter;

			copyFilter.doFilter(inputFile, outputFile);
		}
		if(choice==2)
		{
			std::cout <<"Please enter your encryption key" << std::endl;
			std::cin >> userKey;
			Encryption encrypt(userKey);
			encrypt.doFilter(inputFile, outputFile);
		}
		if(choice==3)
		{
			Capitalize capital;
			capital.doFilter(inputFile, outputFile);
		}
		if(choice==4)
		{
			std::cout <<"Please enter your encryption key" <<std::endl;
			std::cin >>userNewKey;
			EncryptCap encryptCap(userNewKey);
			encryptCap.doFilter(inputFile,outputFile);
		}
		if(choice==5)
		{
			inputFile.close();
			outputFile.close();
			std::cout<<"The program has stopped" << std::endl;
		}
}




return 0;
}