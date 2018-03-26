// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "TicTacToeGame.h"

using namespace std;


int main()
{
	char input;
	bool isDone = false;
	TicTacToeGame game;

	while (isDone == false) {
		game.playGame();
		cout << "Play again?(Y/N)\n";
		cin >> input;
		if (input == 'N' || input == 'n') {
			isDone = true;
		}
	}
	

	system("PAUSE");
    return 0;
}

