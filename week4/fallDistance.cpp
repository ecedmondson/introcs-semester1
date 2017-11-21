/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 4.A for CS 161: This program
 *  * * calculates distance of a falling object.
 **********************************************************/
#include <iostream>

using namespace std;

double fallDistance(double fallTime)
{
	double fallTimeSquared = fallTime * fallTime;
	double gravity = 9.8;
	double distance = (fallTimeSquared * gravity)/2;

	return distance;
}

/*int main ()
{
	cout << fallDistance(3.2) << endl;
	
	return 0;
}*/

	
	
