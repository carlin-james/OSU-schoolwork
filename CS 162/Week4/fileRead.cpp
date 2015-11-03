/*********************************************************************  
** Program Filename:  fileRead.cpp
** Author:   James Carlin 
** Date:  4/21/2015
** Description:  Reads from two files, sorts into single file
** Input:  two previously loaded input files
** Output:  single sorted file
*********************************************************************/

#include <iostream>
#include <fstream>
/*********************************************************************  
** Function:  fileRead
** Description:  takes 3 files, then sorts them into the output file
** Parameters:  3 files
** Pre-Conditions:  2 filled files, one empty
** Post-Conditions:  output file sorted into
*********************************************************************/ 	
void fileRead(std::ifstream& inputFile, std::ifstream& inputFile2, std::ofstream& outputFile);

int main(){

	int choice;
	std::ifstream inputFile;
	std::ifstream inputFile2;
	std::ofstream outputFile;

	inputFile.open("file1.txt");
	inputFile2.open("file2.txt");
	outputFile.open("Finalnums.txt");
//menu for program
 while( choice != 2){
 	std::cout <<"Please choose from the following menu" << std::endl;
 	std::cout <<"Choice 1: Read two files, sort into single file" << std::endl;
 	std::cout <<"Choice 2: Exit" << std::endl;

 		std::cin >> choice;

		
 	switch (choice)
 	{
 		
 		case 1:
 			fileRead(inputFile, inputFile2, outputFile);
 			//closing files
 			inputFile.close();
 			inputFile2.close();
 			outputFile.close();
 			break;
 			
 		case 2:
 			std::cout << "The Program has stopped" << std::endl;
							
 			
 			break;

 			
 		default : 
 		std::cout << "That is an invalid choice" <<std::endl;

 	}
		}






	return 0;
}
/*********************************************************************  
** Function:  fileRead
** Description:  takes 3 files, then sorts them into the output file
** Parameters:  3 files
** Pre-Conditions:  2 filled files, one empty
** Post-Conditions:  output file sorted into
*********************************************************************/ 	
void fileRead(std::ifstream& inputFile, std::ifstream& inputFile2, std::ofstream& outputFile)
{
	
	int inputNum;
	int inputNum2;
	int temp = 10000000;
	
while((!inputFile.eof()) && (!inputFile.eof())){
			int a = 1000000;
			int b = 1000000;
			inputFile >> inputNum;
 			inputFile2 >> inputNum2;
 				a = inputNum;
 				b = inputNum2;

		if(temp < a || temp < b)
 			{
 				outputFile << temp << "," << std::endl;
 			}

 			if(a < b)
 			{

 				outputFile  << a << "," << std::endl;
 				temp = b;
 			}
 			if(b < a)
 			{
 				outputFile  << b << "," << std::endl;
 				temp = a;
 			}

}
}
