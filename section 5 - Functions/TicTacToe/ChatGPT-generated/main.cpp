//ALL CODE WRITTEN BY ChatGPT: https://chat.openai.com/chat
#include <iostream>

const int ROWS = 3;
const int COLS = 3;

// Function prototypes
void printBoard(char board[ROWS][COLS]);
bool checkWin(char board[ROWS][COLS]);
bool checkTie(char board[ROWS][COLS]);

//ALL CODE WRITTEN BY ChatGPT: https://chat.openai.com/chat
int main()
{
    char board[ROWS][COLS] = { {'1', '2', '3'}, 
                               {'4', '5', '6'}, 
                               {'7', '8', '9'} };

    int currentPlayer = 1;
    char playerPiece = 'X';
    int row, col;

    while (true)
    {
        // Print the board
        printBoard(board);

        // Get input from the current player
        std::cout << "Player " << currentPlayer << ", enter a row and column (1-3): ";
        std::cin >> row >> col;

        // Place the player's piece on the board
        board[row-1][col-1] = playerPiece;

        // Check if the current player has won the game
        if (checkWin(board))
        {
            std::cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        // Check if the game is a tie
        if (checkTie(board))
        {
            std::cout << "It's a tie!\n";
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
        playerPiece = (playerPiece == 'X') ? 'O' : 'X';
    }

    return 0;
}

// Prints the current state of the game board
void printBoard(char board[ROWS][COLS])
{
    std::cout << "\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

// Returns true if the current player has won the game
bool checkWin(char board[ROWS][COLS])
{
    // Check for horizontal wins
    for (int i = 0; i < ROWS; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true;
        }
    }

    // Check for vertical wins
    for (int i = 0; i < COLS; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return true;
        }
    }

    // Check for diagonal wins
    if (board[0][0] == board[1][1] && board[1][1] == board[2
                                                           
    //HMM, first try did not generate all source code.
                                                           
//ALL CODE WRITTEN BY ChatGPT: https://chat.openai.com/chat
