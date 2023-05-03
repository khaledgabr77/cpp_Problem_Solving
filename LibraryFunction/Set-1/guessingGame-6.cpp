/*
.Write a C++ program to implement the Number Guessing Game.
In this game the computer chooses a random number between 1 and 100
and the player tries to guess the number in as few attempts as possible.
Each time the player enters a guess, the computer tells him whether
the guess is too high, too low, or right.
Once the player guesses the number, the game is over.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}