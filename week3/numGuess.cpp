/******************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/11/2017
 *  * * Description: Project 3.C for CS 161: This program
 *  * * takes in a number and provides a guessing game.
 ********************************************/ 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double inputGuess, realGuess;

	cout << "Enter the number for the player to guess." << endl;
	cin >> inputGuess;

	cout << "Enter your guess." << endl;
	cin >> realGuess;
	int counter = 1;
	while (inputGuess != realGuess)
	{
		if (inputGuess < realGuess)
		{
			cout << "Too high - try again." << endl;
			cin >> realGuess;
			counter = counter + 1;
		}
		else if(inputGuess > realGuess)
		{
			cout << "Too low - try again." << endl;
			cin >> realGuess;
			counter = counter + 1;
		}
	}
	if (inputGuess == realGuess)
	{
		cout << "You guessed it in " << counter << " tries." << endl;
	}
	
	return 0;
};
