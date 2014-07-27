#include "stdafx.h"
#include "Board.h"

#pragma once

//Declare Class Player
class TTTGamePlayer
{
public:
	//Default Constructor
	TTTGamePlayer();

	//Get the Player's Piece
	char GetPiece() const;

	//Make a move on the board
	void MakeMove(TTTGameBoard&) const;

private:
	//Number of different pieces a player can have
	static const int NUM_PIECES = 1;

	//Possible pieces a player could have
	static const char PIECES[NUM_PIECES];

	//Current Piece
	static int current;

	//A Player's piece
	char m_Piece;
};
