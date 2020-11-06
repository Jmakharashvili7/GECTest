// Program24_MatchingPairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread; // used for sleep_for()
using namespace chrono; // used for seconds()

char cards[] = { 'A', 'C', 'D', 'E', 'B', 'A', 'B', 'E', 'C', 'D' };
bool cardsState[] = { false, false, false, false, false, false, false, false, false, false};

int attemptCount = 0;

void DrawGameBoard();
void DrawGameBoard(int guess1, int guess2);

int main()
{
	int score = 0;
	bool playing = true;

	while (playing == true)
	{
		DrawGameBoard();
		
		int guess1 = 0;
		int guess2 = 0;

		//Check for correct input
		while (true)
		{
			cout << "Please input your guess!" << endl;
			cin >> guess1;

			if (guess1 >= 0 && guess1 <= 10)
				break;
			else
				cout << "Wrong input! Pick a number between 1 and 10.";
		}

		DrawGameBoard(guess1, guess2);

		//Check for correct input
		while (true)
		{
			cout << "Please input your guess!" << endl;
			cin >> guess2;

			if (guess2 >= 0 && guess2 <= 10)
				break;
			else
				cout << "Wrong input! Pick a number between 1 and 10." << endl;
		}

		DrawGameBoard(guess1, guess2);

		//Check Results
		if (cards[guess1-1] == cards[guess2-1])
		{
			score++;
			cardsState[guess1-1] = true;
			cardsState[guess2-1] = true;
			cout << "Match found!" << endl;
			sleep_for(seconds(1));
		}
		else
		{
			cout << "No match found!" << endl;
			sleep_for(seconds(1));
		}
		
		if (score == 5)
		{
			cout << "You have won the game!" << endl;
			playing = false;
		}
		else
			attemptCount++;
	}
}

void DrawGameBoard()
{
	system("cls"); //Clear the board 

	cout << "Currently " << attemptCount << " attempts." << endl;

	for (int i = 0; i < size(cards); i++)
	{
		//If the card is guessed draw it face up
		if (cardsState[i] == true)
			cout << "[" << cards[i] << "]";
		else
			cout << "[" << i + 1 << "]";

		//If we've drawn 5 cards split board
		if (i == 4)
			cout << endl;
	}

	cout << endl;	
}

void DrawGameBoard(int guess1, int guess2)
{
	system("cls"); //clear the board

	cout << "Currently " << attemptCount << " attempts." << endl;

	for (int i = 0; i < size(cards); i++)
	{
		//If the card is guessed draw it face up
		if (cardsState[i] == true || guess1 == i + 1 || guess2 == i + 1)
			cout << "[" << cards[i] << "]";
		else
			cout << "[" << i + 1 << "]";

		//If we've drawn 5 cards split board
		if (i == 4)
			cout << endl;
	}

	cout << endl;
}

