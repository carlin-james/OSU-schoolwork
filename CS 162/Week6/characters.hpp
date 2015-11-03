/*********************************************************************  
** Program Filename:  main.cpp
** Author:   James Carlin 
** Date:  4/25/2015
** Description:  Holds switch statement for list program
** Input:  choice, iteration values
** Output:  user display of list
*********************************************************************/
#ifndef CHARACTERS_HPP
#define CHARACTERS_HPP
#include <iostream>
#include "dice.hpp"





class Character
{
	private:
	public:
	
		int getArmor();
		int getStrength();
		void setArmor(int a);
		void setStrength(int s);
		std::string getName();


//virtual functions to be used for all child classes
		virtual int attack();
		virtual int defend();
		virtual void respawn();
	protected:

	//two dice objects, one for attack roll, one for defense roll

		Dice attackingDice;
		Dice defendingDice;
	
		int strength;
		int armor;
		std::string name;

};

class Barbarian : public Character
{
	private:
	public:
		Barbarian();
		void respawn();
		
	protected:

};


class Goblin : public Character
{

	private:
	public:
		Goblin();
		//attack for goblin is different, so must be redefined
		int attack();
		void respawn();
		
		

	protected:
		int achillies;


};



class ReptilePeople : public Character
{
	private:
	public:
		ReptilePeople();
		void respawn();
		
		
	protected:
};



class theShadow : public Character
{
	private:
	public:
		theShadow();
		//defend for shadow is different, so much be redefined
		int defend();
		void respawn();
		
		
	protected:
		

};



class BlueMen : public Character
{
	private:
	public:
		BlueMen();
		void respawn();
		

	protected:
};

#endif