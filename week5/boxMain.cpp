/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 5.A for CS 161: This is the
 *  * * .cpp implementation for the Box class.
 **********************************************************/
#include <iostream>
#include <string>
#include "Box.hpp"

using namespace std;

int main()
{
	Box box1(2.4, 7.1, 5.0);
	Box box2;
	double volume1 = box1.calcVolume();
	double surfaceArea1 = box1.calcSurfaceArea();
	double volume2 = box2.calcVolume();
	double surfaceArea2 = box2.calcSurfaceArea();
	
	cout << "the volume of box1 is " << volume1 << " and the surface area is " << surfaceArea1 << endl;
	cout << "the volume of box2 is " << volume2 << " and the surface area is " << surfaceArea2 << endl;
	
	return 0;
}