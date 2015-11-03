/*********************************************************************  
** Program Filename:  fileRead.cpp
** Author:   James Carlin 
** Date:  5/3/2015
** Description:  holds member variables and function definitions
** Input:  none
** Output:  none
*********************************************************************/
#include "fileRead.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
/*********************************************************************  
** Function:  FiltFilter::doFilter
** Description:  runs through file, transforms character
** Parameters:  in and out files
** Pre-Conditions:  called after object is created
** Post-Conditions:  transformed output doc
*********************************************************************/ 

void  FileFilter::doFilter(std::ifstream &in, std::ofstream &out)
{
	char aChar;
	char bChar;
	while(!in.eof()){

			in.get(aChar);
			bChar = transform(aChar);
			out << bChar << std::endl;
		}
}
/*********************************************************************  
** Function:  NormalFilter::transform
** Description:  Transforms characters from input files
** Parameters:  passed char
** Pre-Conditions:  passed char from input file
** Post-Conditions:  transformed output doc
*********************************************************************/ 
char NormalFilter::transform(char ch)
{
	return ch;
}
//constructor creating encrption key, for us within child class function
Encryption::Encryption(int key)
{
	this ->key = key;
}
/*********************************************************************  
** Function:  Encryption::transform
** Description:  Transforms characters from input files
** Parameters:  passed char
** Pre-Conditions:  passed char from input file
** Post-Conditions:  transformed output doc
*********************************************************************/ 
char Encryption::transform(char ch)
{
	return ch + this ->key;
}
/*********************************************************************  
** Function:  Capitalize::transform
** Description:  Transforms characters from input files
** Parameters:  passed char
** Pre-Conditions:  passed char from input file
** Post-Conditions:  transformed output doc
*********************************************************************/ 
char Capitalize::transform(char ch)
{
	if((int)ch > 96 && (int)ch < 123){
	return ch + (-32);
	}
	else
		return ch;
}
//constructor declaring encyrption key for use within child class functions
EncryptCap::EncryptCap(int newKey)
{
	this ->newKey = newKey;
}
/*********************************************************************  
** Function:  EncryptCap::doFilter
** Description:  runs through file, transforms character
** Parameters:  in and out files
** Pre-Conditions:  called after object is created
** Post-Conditions:  transformed output doc
*********************************************************************/ 
void EncryptCap::doFilter(std::ifstream &in, std::ofstream &out)
{
	char aChar;
	char bChar;
	int count = 5;
	while(!in.eof()){
		if(count > 0){
			in.get(aChar);
			bChar = transform(aChar);
			out << bChar << std::endl;
			count--;
		}
		else
		{
			out << " " <<std::endl;
			count = 5;
		}
		}

}
/*********************************************************************  
** Function:  EncryptCap::transform
** Description:  Transforms characters from input files
** Parameters:  passed char
** Pre-Conditions:  passed char from input file
** Post-Conditions:  transformed output doc
*********************************************************************/ 
char EncryptCap::transform(char ch)
{
	if((int)ch > 96 && (int)ch < 123){
	return (ch + this ->newKey) + (-32);
	}
	else
	{
		return ch + this ->newKey;
	}
}

