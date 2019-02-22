// Canvas Program 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include "Canvas Program 3.h"
using namespace std;

int random;

int randNum();

int main() {
	int sentinel = 0;
	int userGuess = 0;
	char replayInput;

	randNum();

	while (sentinel = 1) {
		cout << "I have a number between 1 and 1000!" << endl;
		cout << "Can you guess my number?\nPlease type your guess: " << endl;
		cin >> userGuess;


		if (userGuess == random)
		{
			cout << "Excellent! You guessed the number! Would you like to play again?\nType Y for yes, or N or no." << endl;
			cin >> replayInput;

			replayInput = toupper(replayInput);
			if (int(replayInput) == 89)
			{
				randNum();
				sentinel = 1;
			}//end recursive if
			else
			{
				return 0;
			}//end recursive else

		}
		else if (userGuess > random) {
			cout << "Aww too high. Try again.\n" << endl;
		}
		else if (userGuess < random) {
			cout << "Aww too low. Try again.\n" << endl;
		}
	}
}




	int randNum()
	{
		random = 1 + rand() % 1000;
		//cout << "DEBUG: Random number is: " << random << endl;
		return random;
	}
