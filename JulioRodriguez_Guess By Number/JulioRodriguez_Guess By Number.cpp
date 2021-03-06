// JulioRodriguez_Guess By Number.cpp : Defines the entry point for the console application.
//
//Guess My Number
// The Classic Number guessing Game 

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	srand(static_cast<unsigned int>(time(0))); //speed random number generator
	
	int secretNumber = rand() % 100 + 1; //random number between 1 and 100
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number Game \n\n";

	do
		(
			cout << "Enter a Guess";
	cin >> guess;
	++tries;

	if (guess > secretNumber)
	{ 
		cout << "Too High!\n\n";
	}
	else if (guess < secretNumber)
	{
		cout << "Too Low!\n\n";
	}
	else
	{
		cout << "\nThat's it! You Got it in " << tries << "guesses!\n"
	}
	)
	return 0;
}

