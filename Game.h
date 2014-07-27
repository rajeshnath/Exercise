#include "stdafx.h"
#include "Board.h"
#include "Player.h"

#pragma once

//Declare the Game class
class TTTGame
{
public:
	//Default Constructor
	TTTGame();

	//Check if the players are still playing
	bool IsPlaying() const;

	//Did the current player win
	bool IsCurrentPlayerWon() const;

	//Check if the game is a tie
	bool IsGameTied() const;

	//Display Game Instructions
	void DisplayGameInstructions() const;

	//Switch to the NextPlayer
	void SwitchToNextPlayer();

	//Declare the Winner
	void DeclareWinner() const;

	//Function which organizes the play
	void Play();

private:
	//Define the number of players
	static const int NUM_PLAYERS = 2;

	//Define the players
	static const int FIRST = 0;
	static const int SECOND = 1;

	//The current player
	int m_Current;

	//The Board Object
	TTTGameBoard m_Board;

	//The Players Object
	TTTGamePlayer m_Players[NUM_PLAYERS];
};
