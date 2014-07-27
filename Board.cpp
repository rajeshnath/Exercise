#include "stdafx.h"
#include "Board.h"

//Define the member functions
//Define the WINNING COMBOS array
const int TTTGameBoard::WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBOS] = 
{{0,1,2},
{3,4,5},
{6,7,8},
{0,3,6},
{1,4,7},
{2,5,8},
{0,4,8},
{2,4,6}};

TTTGameBoard::TTTGameBoard()
{
	//Reset the Game Board
	ResetGameBoard();
}

bool TTTGameBoard::IsGameBoardFull() const
{
	bool full = true;
	int i = 0;

	while (full && (i<NUM_SQUARES))
	{
		if(m_Squares[i] == EMPTY)
		{
			full = false;
		}
		++i;
	}
	return full;
}

bool TTTGameBoard::IsMoveAllowed(int move) const
{
	return (move >=0 && move < NUM_SQUARES && m_Squares[move] == EMPTY);
}

bool TTTGameBoard::IsWinner(char piece) const
{
	bool winner = false;
	int i = 0;

	//Traverse through all the winning combos
	while (!winner && (i < NUM_COMBOS))
	{
		int piecesInCombos = 0;

		//Check if the current winning combo is achieved by the player
		for (int j = 0; j < NUM_IN_COMBOS; ++j)
		{
			if(m_Squares[WINNING_COMBOS[i][j]] == piece)
			{
				++piecesInCombos;
			}
		}

		//Yes achieved, declare we have found a winner
		if(piecesInCombos == NUM_IN_COMBOS)
		{
			winner = true;
		}
		++i;
	}

	return winner;
}

void TTTGameBoard::DisplayGameBoard() const
{
	cout << endl << "\t" << m_Squares[0] << " | " << m_Squares[1] << " | " << m_Squares[2]; //Box 1, 2 & 3 created
	cout << endl << "\t" << "---------"; // Seperator created
	cout << endl << "\t" << m_Squares[3] << " | " << m_Squares[4] << " | " << m_Squares[5]; //Box 4, 5 & 6 created
	cout << endl << "\t" << "---------"; // Seperator created
	cout << endl << "\t" << m_Squares[6] << " | " << m_Squares[7] << " | " << m_Squares[8]; //Box 6, 7 & 8 created
	cout << endl << endl;
}

void TTTGameBoard::ResetGameBoard()
{
	//Reset all placeholders to EMPTY
	for (int i=0; i < NUM_SQUARES; ++i)
	{
		m_Squares[i] = EMPTY;
	}
}

void TTTGameBoard::UpdateBoardMove(char piece, int move)
{
	m_Squares[move] = piece;
}
