#include "stdafx.h"
#include "Game.h"

TTTGame::TTTGame():m_Current(0)
{
}

bool TTTGame::IsPlaying() const
{
	return !m_Board.IsGameBoardFull();
}

bool TTTGame::IsCurrentPlayerWon() const
{
	return 	m_Board.IsWinner(m_Players[m_Current].GetPiece());
}

bool TTTGame::IsGameTied() const
{
	bool isBoardFull = false;
	if(m_Board.IsGameBoardFull())
	{
		isBoardFull = true;
	}

	return isBoardFull;
}

void TTTGame::DisplayGameInstructions() const
{
	cout << "\tWelcome to Tic Tac Toe Game" << endl << endl;
	cout << "Make your move by entering a number from 0 to 8" << endl;
	cout << "The number corresponds to the board positions as shown below" << endl << endl;

	cout << endl << "\t" << "0 | 1 | 2";
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << "3 | 4 | 5";
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << "6 | 7 | 8";

	cout << endl << endl;
	cout << "The game shall start now" << endl << endl;

}

void TTTGame::SwitchToNextPlayer()
{
	//Change the current player
	m_Current = (m_Current + 1) % NUM_PLAYERS;
}

void TTTGame::DeclareWinner() const
{
	cout << "The game has come to an end" << endl;

	if(m_Board.IsWinner(m_Players[FIRST].GetPiece())) //Check if the first player is winner
	{
		cout << "The winner is " << m_Players[FIRST].GetPiece() << "!" << endl;
	}
	else if(m_Board.IsWinner(m_Players[SECOND].GetPiece())) //Check if the second player is winner
	{
		cout << "The winner is " << m_Players[SECOND].GetPiece() << "!" << endl;
	}
	else if(IsGameTied()) //Check if the game is a tie
	{
		cout << "The game is a tie" << endl;
	}

}

void TTTGame::Play()
{
	m_Current = FIRST;
	m_Board.ResetGameBoard();

	do
	{
		m_Board.DisplayGameBoard();
		m_Players[m_Current].MakeMove(m_Board);

		//Check if the current player won
		if(IsCurrentPlayerWon())
			break;
		
		//Switch Player
		SwitchToNextPlayer();
	}while (IsPlaying());

	m_Board.DisplayGameBoard();
	DeclareWinner();
}
