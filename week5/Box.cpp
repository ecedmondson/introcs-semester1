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

//Constructor for Values Instantiated in the Object
Box::Box(double h, double w, double l)
{
	setHeight(h);
	setWidth(w);
	setLength(l);
}
// Constructor 2 - Default Constructor
Box::Box()
{
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
}

void Box::setHeight(double h) 
{
	height = h;
}

void Box::setWidth(double w)
{
	width = w;
}

void Box::setLength(double l)
{
	length = l;
}

double Box::calcVolume()
{
	double volume;
	volume = height * width * length;
	
	return volume;
}

double Box::calcSurfaceArea()
{
	double rect1, rect2, rect3, surfaceArea;
	rect1 = 2 * (height * width);
	rect2 = 2 * (height * length);
	rect3 = 2 * (width * length);
	
	surfaceArea = rect1 + rect2 + rect3;
	
	return surfaceArea;
}

