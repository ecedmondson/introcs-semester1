/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 8.A for CS 161: This program
 *  * * sorts three variables by address. 
 **********************************************************/

#include <iostream>

using namespace std;

void smallSort2(int *pointA, int *pointB, int *pointC)
{
	int sorterArray[3]; //I referenced my original smallSort.cpp function for this project and decided to include an int array to try and organize the data assignments a little bit more this time and in order to define fewer overall variables to keep track of. 
	if(*pointA < *pointB && *pointA < *pointC) //Case: *pointA is the lowest 
	{	
		bool testValA = *pointB < *pointC;
		if (testValA)
		{
			sorterArray[0] = *pointA;
			sorterArray[1] = *pointB;
			sorterArray[2] = *pointC;
		}
		else
		{
			sorterArray[0] = *pointA;
			sorterArray[1] = *pointC;
			sorterArray[2] = *pointB;
		}
	}
	if(*pointB < *pointA && *pointB < *pointC) //Case: *pointB is the lowest 
	{	
		bool testValB = *pointA < *pointC;
		if (testValB)
		{
			sorterArray[0] = *pointB;
			sorterArray[1] = *pointA;
			sorterArray[2] = *pointC;
		}
		else
		{
			sorterArray[0] = *pointB;
			sorterArray[1] = *pointC;
			sorterArray[2] = *pointA;
		}
	}
		
	if(*pointC < *pointA && *pointC < *pointB) //Case: *pointA is the lowest 
	{	
		bool testValC = *pointA < *pointB;
		if (testValC)
		{
			sorterArray[0] = *pointC;
			sorterArray[1] = *pointA;
			sorterArray[2] = *pointB;
		}
		else
		{
			sorterArray[0] = *pointC;
			sorterArray[1] = *pointB;
			sorterArray[2] = *pointA;
		}
	}	
	*pointA = sorterArray[0];
	*pointB = sorterArray[1];
	*pointC = sorterArray[2];
}

int main()
{
    int A = -90;
    int B = -52;
    int C = -254;
    
    int Aa = 7;
    int Ba = 1;
    int Ca = 3;
    
    cout << "The ints A, B, and C, are " << A << B << C << endl;
    smallSort2(&A, &B, &C);
    cout << "Now, after the function, the ints are " << A << B << C << endl;
    cout << "The ints Aa, Ba, and Ca, are " << Aa << Ba << Ca << endl; 
    smallSort2(&Aa, &Ba, &Ca);
    cout << "Now they are " << Aa << Ba << Ca << endl; 
}