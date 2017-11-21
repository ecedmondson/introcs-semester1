/*****************************************************
 * * Name: Emily Edmondson
 * * Date: 10/3/2017
 * * Description: Project 2.B for CS 161 - This program
 * * takes in a Celsius temperature and returns the 
 * * equivalent temperature in Fahrenheit.
 *****************************************************/
#include <iostream>
#include <string>

using namespace std;

double celsius, fahrenheit; 

int main()
{
	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsius;

	fahrenheit = ((9 * celsius) / 5) + 32;
	cout << "The equivalent Fahrenheit temperature is:" << endl<<fahrenheit << endl;

	return 0;
};



