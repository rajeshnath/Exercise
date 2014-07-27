Tic Tac Toe game in C++

Program Description:

I have created a Tic-Tac-Toe game for two players. The game is played on a 3X3 square where each player can mark their square.
The players are allowed to take alternate turns and mark their entry in the 3X3 square. The players are marked with 'A' or 'B'.
A player who is first to make a continuous entry in any direction (Top-down, left-right, diagonal) is declared the winner of the game.

I have created the program using three classes:
1) TTTGameBoard (Board.h, Board.cpp) - It encapsulates the GameBoard in the form of its locations and their entries (Empty or the player markings)
2) TTTGamePlayer (Player.h, Player.cpp) - It encapsulates the Players and their action of making a move
3) TTTGame (Game.h, Game.cpp) - This is the main class which encapsulates the overall Game functionality. It contains a GameBoard object and the Player objects. It also encapsulates the functionality of Playing, Finding the winner and switching between players. 

Points to NOTE:
1) Since the game has defined boundaries (such as only 3X3 square gameboard is used, only 2 players are allowed to play), hence I have not used any generic container such as STL Vector, List etc.
2) I have divided the game into three classes to encapsulate their individual functionality and to increase reusability
3) The code is compiled and tested using a Visual C++ 2010 Express edition on a Windows 8 Home (64 Bit) PC.
4) I have been able to invest only one day (around 8 hours time) to create this source code. Due to not being able to spend ample time, I am not including unit tests.
5) I have included dexplanatory code comments wherever needed.
