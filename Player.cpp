#include "stdafx.h"
#include "Player.h"

int TTTGamePlayer::current = 0;

TTTGamePlayer::TTTGamePlayer():m_Piece('A'+current)
{
	++current;
}

char TTTGamePlayer::GetPiece() const
{
	return m_Piece;
}

void TTTGamePlayer::MakeMove(TTTGameBoard& m_Board) const
{
	int move;
	cout << "Enter your location number [0 to 8] : ";
	cin >> move;

	while(!m_Board.IsMoveAllowed(move))
	{
		cout << "The location is either invalid or already occupied" << endl;
		cout << "Enter your location number [0 to 8] : ";
		cin >> move;
	}

	m_Board.UpdateBoardMove(GetPiece(),move);
}
