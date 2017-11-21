/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/11/2017
 *  * * Description: Project 3.A for CS 161: This program
 *  * * takes in a user-defined number of integers and
 *  * *  outputs the minimum and maximum integer from the input.
 **********************************************************/ 
#include <iostream>
#include <string>

using namespace std; 

int main () 
{

	int minValue, maxValue, entries;
	cout << "How many integers would you like to enter?" << endl;
	cin >> entries;
	int counter = 1, entry;
	cout << "Please enter " << entries << " integers." << endl;
	cin >> entry;
	minValue = entry;
	maxValue = entry;
	while (counter < entries)
		{
			cin >> entry;
			if (entry <= minValue)
				{
					minValue = entry;
					counter++;
				}
			else if (entry >= maxValue)
				{
					maxValue = entry;
					counter++;
				}
			else
				{
					counter++;
				}
		}
	cout << "min: " << minValue << endl;
	cout << "max: " << maxValue << endl;

	return 0;
};


