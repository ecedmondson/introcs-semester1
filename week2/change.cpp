/******************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/3/2017
 *  * * Description: Project 2.C for CS 161 -
 *  * * This program takes in an integer in cents
 *  * * less than a dollar and returns change.
 *********************************************/ 
#include <iostream>
#include <string>

using namespace std;

int cents, q, d, n, p;

int main()
{
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> cents;

	// I'm sure there's a better way to do this.
	q = cents / 25;
	d = (cents - (q*25))/10;
	n = (cents - ((q*25)+(d*10)))/5;
	p = (cents - ((q*25)+(d*10)+(n*5)))/1; 

	cout << "Your change will be:\nQ: " << q << "\nD: " << d << "\nN: " << n << "\nP: " << p << endl; 	

	return 0;
} 
