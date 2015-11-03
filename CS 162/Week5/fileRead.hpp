/*********************************************************************  
** Program Filename:  fileRead.hpp
** Author:   James Carlin 
** Date:  5/3/2015
** Description:  holds member variables and function declarations
** Input:  none
** Output:  none
*********************************************************************/


#ifndef FILEREAD_HPP
#define FILEREAD_HPP
#include <fstream>
#include <cstring>


class FileFilter
{

	private:

	public:

	
		
		void doFilter(std::ifstream &in, std::ofstream &out);
		

	protected:

//I have this set to 0 becuase I was getting an error in the compiler, as it wasn't defined in the base class
		virtual char transform(char ch) = 0;




};

class NormalFilter : public FileFilter
{
private:

public:

protected:
	virtual char transform(char ch);

};

class Encryption : public FileFilter
{

	private:
		int key;
	public:
		Encryption(int key);
	protected:
		virtual char transform(char ch);

};

class Capitalize : public FileFilter
{
private:
public:
	
protected:
	virtual char transform(char ch);
};

class EncryptCap : public FileFilter
{
private:
	int newKey;
public:
	EncryptCap(int newKey);
	void doFilter(std::ifstream &in, std::ofstream &out);
protected:
	virtual char transform(char ch);
};


#endif 