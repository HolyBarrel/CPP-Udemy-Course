#include <iostream>
#include <string>
using namespace std;

//Constant to determine the dimension of the TIC TAC TOE-board.
const int ROWS = 3; 
const int COLS = ROWS; 

//Global boolean to signify that the current turn is X.
bool xTurn;

void printBoard(string board[ROWS][COLS]);

void printBoardLine(int COLS);

void runGame();

void initializeBoard(string board[ROWS][COLS]);

void getUserInput(string board[ROWS][COLS]);

void choosePlayer(bool xStarts);

void alternateTurn();

bool isFreeSpace(string board[ROWS][COLS], int r, int c);

string getWinner(string board[ROWS][COLS]);

string checkRows(string board[ROWS][COLS]);

string checkCols(string board[ROWS][COLS]);

string checkLeftDiagonal(string board[ROWS][COLS]);

string checkRightDiagonal(string board[ROWS][COLS]);

bool isBoardFull(string board[ROWS][COLS]);

/*
* Main-function to run the application to play TIC TAC TOE.
*/
int main()
{
	runGame();

	return 0;
}


/*
* Help function to print the upper and lower line of the board.
*/
void printBoardLine(int COLS) 
{
	cout << " ";
	for (int i = 0; i < COLS; i++) 
	{
		cout << "--- ";
	}
	cout << endl;
}
/*
* Prints the current board by displaying the placed pieces.
*/
void printBoard(string board[ROWS][COLS]) 
{

	for (int i = 0; i < ROWS; i++)
	{
		printBoardLine(COLS);
		for (int j = 0; j < COLS; j++)
		{
			cout << "| " << board[i][j] << " ";
		}
		cout << "|" << endl;
	}
	printBoardLine(COLS);
}

/*
* Initiates the game by prompting the user which piece of 'X' and 'O' starts.
*/
void runGame()
{
	bool run = true; 
	bool xStarts = false;
	cout << "Please enter 1 to for player one to start with 'X'," << endl
		<< "and 0 for player one to start with 'O'." << endl;
	cin >> xStarts; 
	choosePlayer(xStarts);
	string board[ROWS][COLS];
	initializeBoard(board);

	//While loop to continually prompt the players for placement of TIC TAC TOE pieces.
	while (run)
	{
		getUserInput(board);
		printBoard(board);
		if (getWinner(board) != "N") {
			cout << "The winner of the game is the player: "
				<< getWinner(board) << endl;
			break;
		}
		if (isBoardFull(board))
		{
			cout << "The board was full, and ended in a cat's game. No player won!" << endl;
			break;
		}
		alternateTurn();
	}

}

/*
* Initializes all spots of the board to empty strings (" ").
*/
void initializeBoard(string board[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			board[i][j] = " ";
		}
	}
}

/*
* Guides the player for integers requested for placement of a game-piece. Gets this input from the terminal.
* Then assigns the spot of the board to the player's piece. 
*/
void getUserInput(string board[ROWS][COLS])
{
	if (xTurn)
	{
		cout << "Please enter the position to place the 'X'" << endl; 
	}
	else
	{
		cout << "Please enter the position to place the 'O'" << endl;
	}
	int r; 
	int c;

	cout << "Enter a number for the target row (0-" << ROWS-1 << ")." << endl;
	cin >> r;
	cout << "Enter a number for the target column (0-" << COLS-1 << ")." << endl;
	cin >> c;
	if (isFreeSpace(board, r, c))
	{
		if (xTurn)
		{
			board[r][c] = "X";
		}
		else
		{
			board[r][c] = "O";
		}


	}
	else
	{
		cout << "The position: (ROW: " << r << ", COL: " << c 
			<< ") was occupied or not on the board! Please try again." << endl;
		getUserInput(board);
	}

}

/*
* Function to initialize the starting player according to the global boolean 'xTurn'.
*/
void choosePlayer(bool xStarts)
{
	if (xStarts) 
	{
		xTurn = true;
	}
	else
	{
		xTurn = false; 
	}
}

/*
* Alternates the boolean value of the global variable 'xTurn'. 
*/
void alternateTurn()
{
	if (xTurn)
	{
		xTurn = false;
	}
	else
	{
		xTurn = true;
	}
}

/*
* Checks if the attempted placement of a piece on the board is a valid position.
* Takes in the board as well as a position (a row integer (r) and column integer (c) that is tested 
* to see if is a free space. 
* 
* Returns true if the space is free and false otherwise.
*/
bool isFreeSpace(string board[ROWS][COLS], int r, int c)
{
	if (board[r][c] == " ")
	{
		return true;
	}
	return false;
}

/*
* Has functions that checks of the current board contains the placement of pieces that validates to a won position 
* by any of the players. 
* 
* Returns a string of the winning player's piece (either "X" or "O") or returns "N" if none of the players have won. 
*/
string getWinner(string board[ROWS][COLS])
{
	string winner = "N";

	//CHECKS IF ANY PLAYER HAS WON BY THREE IN A ROW
	
	winner = checkRows(board);

	//CHECKS IF ANY PLAYER HAS WON BY THREE IN A COL
	
	if (winner == "N") 
	{
		winner = checkCols(board);
	}

	//CHECKS IF ANY PLAYER HAS WON BY THREE IN A DIAGONAL
	//FROM UPPER LEFT TO LOWER RIGHT DIAGONAL

	if (winner == "N")
	{
		winner = checkLeftDiagonal(board);
	}

	//CHECKS IF ANY PLAYER HAS WON BY THREE IN A DIAGONAL
	//FROM UPPER RIGHT TO LOWER LEFT DIAGONAL

	if (winner == "N")
	{
		winner = checkRightDiagonal(board);
	}	

	return winner;
}

/*
* Checks all the rows of the board for a won position by any of the players.
* 
* Returns a string of the winning player's piece (either "X" or "O") or returns "N" if none of the players have won.
*/
string checkRows(string board[ROWS][COLS])
{
	int countEqualsPrev = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (board[i][j] == board[i][j - 1] && board[i][j] != " ")
			{
				countEqualsPrev++;
			}
			if (countEqualsPrev == ROWS - 1)
			{
				return board[i][j];
			}
		}
		countEqualsPrev = 0;
	}

	return "N";
}

/*
* Checks all columbs of the board for a won position by any of the players.
* 
* Returns a string of the winning player's piece (either "X" or "O") or returns "N" if none of the players have won.
*/
string checkCols(string board[ROWS][COLS])
{
	int countEqualsPrev = 0;

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 1; j < ROWS; j++)
		{
			if (board[j][i] == board[j - 1][i] && board[j][i] != " ")
			{
				countEqualsPrev++;
			}
			if (countEqualsPrev == ROWS - 1)
			{
				return board[j][i];
			}
		}
		countEqualsPrev = 0;
	}

	return "N";
}

/*
* Checks the board diagonal from upper left to lower right for a won position by any of the players.
* 
* Returns a string of the winning player's piece (either "X" or "O") or returns "N" if none of the players have won.
*/
string checkLeftDiagonal(string board[ROWS][COLS])
{

	int countXes = 0;
	int countOs = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == j && board[i][j] != " ")
			{
				if (board[i][j] == "X")
				{
					countXes++;
				}
				else
				{
					countOs++;
				}
			}
		}
	}
	if (countXes == ROWS)
	{
		return "X";
	}
	if (countOs == ROWS)
	{
		return "O";
	}
	return "N";
}

/*
* Checks the board diagonal from upper right to lower left for a won position by any of the players.
* 
* Returns a string of the winning player's piece (either "X" or "O") or returns "N" if none of the players have won.
*/
string checkRightDiagonal(string board[ROWS][COLS])
{

	int countXes = 0;
	int countOs = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j == COLS - 1 - i && board[i][j] != " ")
			{
				if (board[i][j] == "X")
				{
					countXes++;
				}
				else
				{
					countOs++;
				}
			}
		}
	}

	if (countXes == ROWS)
	{
		return "X";
	}
	if (countOs == ROWS)
	{
		return "O";
	}

	return "N";
}

/*
* Checks if the board is full. If this is satisfied all spots of the board must be unequal to " ". 
*
* If this is satisfied, the function returns true. Otherwise false is returned.
*/
bool isBoardFull(string board[ROWS][COLS])
{
	int fullBoardPlacements = ROWS * COLS; 
	int countPlacedPieces = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (board[i][j] != " ") {
				countPlacedPieces++;
			}
		}
	}
	if (countPlacedPieces == fullBoardPlacements) {
		return true;
	}
	else
	{
		return false; 
	}
}
