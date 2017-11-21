/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 4.B for CS 161: This program
 *  * * sorts three reference variables and accounts
 *  * * for edge cases in a nearly neurotic way.
 **********************************************************/

#include <iostream>

using namespace std;

void smallSort(int &a, int &b, int &c)
{
	int smallest, middle, largest;
	if (a < b && a < c)
	{
		bool testValA = b < c;
		if (testValA)
		{
			smallest = a;
			middle = b;
			largest = c;
		}
		else
		{
			smallest = a;
			middle = c;
			largest = b;
		}
	}
	else if (b < a && b < c)
	{
		bool testValB = a < c;
		if (testValB)
		{
			smallest = b;
			middle = a;
			largest = c;
		}
		else
		{
			smallest = b;
			middle = c;
			largest = a;
		}
	}
	else if (c < a && c < b)
	{
		bool testValC = a < b;
		if (testValC)
		{
			smallest = c;
			middle = a;
			largest = b;
		}
		else 
		{
			smallest = c;
			middle = b;
			largest = a;
		}
	}
	else if (a == b || a == c || b == c)
	{
	    if (a == b)
	    {
	        bool testValD = b < c;
	        if (testValD)
	        {
	            smallest = a;
	            middle = b;
	            largest = c;
	        }
	        else
	        {
	            smallest = c;
	            middle = b;
	            largest = a;
	        }
	    }
	    else if (b == c)
	    {
	        bool testValE = c < a;
	        if (testValE)
	        {
	            smallest = b;
	            middle = c;
	            largest = a;
	        }
	        else
	        {
	            smallest = a;
	            middle = b;
	            largest = c;
	        }
	    }
	}
	else if (a == b && b == c)
	{
	    smallest = a;
	    middle = b;
	    largest = c;
	}
	            
	
	a = smallest;
	b = middle;
	c = largest;
}

/*int main()
{
	int a = 2, b = 2003, c = 2003;
    smallSort(a,b,c);
	cout << "a: " << a << " b: " << b << " c: " << c << endl;

}*/
	
