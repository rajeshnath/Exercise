#include "stdafx.h"
#pragma once

//Declare the class Board
//Represents the Game Board
class TTTGameBoard
{
public:
	//default constructor
	TTTGameBoard();

	//Check if the board is full
	bool IsGameBoardFull() const;

	//Check if the move is allowwed
	bool IsMoveAllowed(int move) const;

	//Check if a player is winner
	bool IsWinner(char piece) const;

	//display the board to the players
	void DisplayGameBoard() const;

	//set all squares to empty
	void ResetGameBoard();

	//Make a move
	void UpdateBoardMove(char piece, int move);

	//number of squares
	static const int NUM_SQUARES = 9;

	//empty move
	static const char EMPTY = ' ';

private:
	//define the number of winning combos
	static const int NUM_COMBOS = 8;

	//define the number of squares in a combo
	static const int NUM_IN_COMBOS = 3;

	//define the winning combos
	static const int WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBOS];

	//define the squares
	char m_Squares[NUM_SQUARES];
};
