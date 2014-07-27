// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"


int _tmain(int argc, _TCHAR* argv[])
{
	TTTGame tictactoegame;

	//Display the game instructions
	tictactoegame.DisplayGameInstructions();
	char playAgain;

	do{
		//Start the game
		tictactoegame.Play();

		//One round complete, play again?
		cout << endl << "Play Again? (y/n) : ";
		cin >> playAgain;
	}while ((playAgain != 'n') && (playAgain != 'N'));

	return 0;
}

