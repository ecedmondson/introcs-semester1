/******************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 9/19/17
 *  * * Description: Project 2.A for CS 161: This project
 *  * * takes in five numbers and returns their average.
 ********************************************/ 
#include <iostream>
#include <string>

using namespace std;

double sum, avg;
double one, two, three, four, five;

int main() 
{
	cout << "Please enter five numbers." << endl;
	cin >> one;
	cin >> two;
	cin >> three;
	cin >> four;
	cin >> five;	
	
    sum = one + two + three + four + five;
    avg = sum / 5;
    
    cout << "The average of those numbers is: " <<endl<< avg << endl;
    
    return 0;
};
    
