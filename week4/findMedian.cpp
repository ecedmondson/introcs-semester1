/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/11/2017
 *  * * Description: Project 7.A for CS 161: This program
 *  * * takes in an array and an array size and outputs 
 *  * * the median value of the array. 
 **********************************************************/
 /* I got a point off last time for not commenting my code so I COMMENTED EVERYTHING.*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int findMedian (int arrayOfNums[], int size)
{
  sort (arrayOfNums, arrayOfNums + size);
  if (size % 2 == 0)
    {
      /*Declaring two median variables because in an even numbered array the median 
      would need to be the average of the two middle numbers. */
      int mednOne, mednTwo;
      /*Intializing a variable average which is really the median value to be returned*/
      double avg;
      /*Finding the place of first middle number in an even numbered array*/
      mednOne = size / 2 ;
      /*Finding the place of second middle number in an even numbered array. Minus one because
      arrays start at zero. */
      mednTwo = mednOne - 1;
      /*Declaring two new double values because the median might be a rational numbered
      that is not an integer */
      int mednOneValue, mednTwoValue;
      /*Extracting the value of these places in the array and updating the variables to equal the values*/
      mednOneValue = arrayOfNums[mednOne];
      mednTwoValue = arrayOfNums[mednTwo]; 
      avg = (mednOneValue + mednTwoValue) / 2;
      return avg;
    }
  else if (size % 2 != 0)
    {
      /*Initialize a variable and find a place value for the array. It is double cause of the odd length of the array
	  means that I will have a rational non integer when dividing by 2. Most of the variable definitions in this 
	  section are dealing with doubles and ints to be absolutely sure I get the right value. As such, it is a bit tedious.*/
      double medn; 
      medn = size;
      medn = (medn / 2) - .5; 
      /*Make the double an int and initialize the mednValue variable*/
      int mednValue, mednAsInt;
      mednAsInt = medn; 
      mednValue = arrayOfNums[mednAsInt];
      return mednValue;
    }
};


//Tests: ignore 
/*int main ()
{
  int arrayOfNums[5] = { 1, 2, 3, 4, 5 };
  int arrayOfNums2[8] = { 1, 2, 7, 12, 3, -1, 51, 23 };
  int arrayOfNums3[7] = { - 32, 58, 104, 7, 3, 51, 13};

  cout << "The median of the first array is " << findMedian (arrayOfNums, 5) << endl; 
  cout << "The median of the second array is " << findMedian (arrayOfNums2, 8) << endl;
  cout << "The median of the third array is " << findMedian (arrayOfNums3, 7);

}*/
