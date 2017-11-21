/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 5.B for CS 161: This is the
 *  * * .cpp class functions file for the Taxicab class.
 **********************************************************/
#include <iostream>
#include <string>
#include "Taxicab.hpp"

using namespace std;

int main ()
{
	Taxicab cab1;
	Taxicab cab2(5, -8);
	cout << "when initialized cab 1 has traveled " << cab1.getDistanceTraveled() << endl;
	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);
	cout << "Cab 1 has traveled " << cab1.getDistanceTraveled() << endl;
	cab2.moveY(7);
	cout << "The Y COORD of cab 2 is" << cab2.getYCoord() << endl;
	cout << "Cab 2 has traveled " << cab2.getDistanceTraveled() << endl;
	cab2.moveX(13);
	cab2.moveY(83);
	cab2.moveY(-51);
	cab2.moveX(-7);
	cout << "After changes, cab2 has now traveled " << cab2.getDistanceTraveled() << endl;
	
	return 0;
}