/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/11/2017
 *  * * Description: Project 3.B for CS 161: This program
 *  * * takes in a .txt file with integers and
 *  * *  outputs a .txt file with the sum of the integers.
 **********************************************************/ 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	ifstream inputFile;
	ofstream outputFile;
	string inputFileString;
	double num, numsum= 0;

	cout << "Please enter your filename." << endl;
	cin >> inputFileString;

	inputFile.open(inputFileString);

	if (inputFile)
	{
		while (inputFile >> num )
			{
				numsum = numsum + num;
			}	
		inputFile.close();

		outputFile.open("sum.txt");
		outputFile << numsum << endl;
		outputFile.close();

		cout << "result written to sum.txt" << endl;
	}
	else
	{
		cout << "could not access file";
	}
	
	return 0;
}; 
