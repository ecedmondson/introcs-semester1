/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 5.B for CS 161: This is the
 *  * * .cpp class functions file for the Taxicab class.
 **********************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include "Taxicab.hpp"

using namespace std;

//Default Constructor
Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	distance = 0;
}
// Constructor for other stuff 
Taxicab::Taxicab(int x, int y)
{
	xCoord = x;
	yCoord = y;
	distance = 0;
}

int Taxicab::getDistanceTraveled()
{
	return distance;
}
	
void Taxicab::moveX(int x)
{
	distance = distance + abs(x);
	xCoord = xCoord + x;
}

void Taxicab::moveY(int y)
{
	distance = distance + abs(y);
	yCoord = yCoord + y;
}

int Taxicab::getXCoord()
{
	return xCoord;
}

int Taxicab::getYCoord()
{
	return yCoord;
}
	
// For reference, so I don't forget to define a function in the hpp file: 
/*class Taxicab
{
public:
    
    int getXCoord();
	int getYCoord();
	int getDistanceTraveled;
	void moveX(int x);
	void moveY(int y);
	Taxicab();
	Taxicab(int x, int y);
   
private:
    int xCoord;
    int yCoord;
    int distance;
   
};
#endif*/
    


