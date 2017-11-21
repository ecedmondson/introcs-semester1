/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 4.C for CS 161: This program
 *  * * performs a hailstone calculation.
 **********************************************************/ 

#include <iostream>
#include <string>

using namespace std;

int hailstone(int number)
{
    int steps = 0;
    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number = number/2;
            steps = steps + 1;
        }
        else 
        {
            number = number * 3;
            number = number + 1;
            steps = steps + 1;
        }
    }
    
    return steps;
}
            

int main()
{
  cout << hailstone(3);
  
  return 0;
}