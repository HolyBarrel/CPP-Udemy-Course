//ALL CODE WRITTEN BY ChatGPT: https://chat.openai.com/chat
#include <iostream>
#include <array>

using namespace std;

/*
Generated comment:
'This code defines a 3x3 board as a 2D array of characters and provides functions for initializing the board,
printing the current state of the board, and checking if a player has won. The main game loop'
*/

const int Rows = 3;
const int Cols = 3;

array<array<char, Cols>, Rows> board;

void initBoard() {
  // Initialize all elements of the board to ' ' (empty space)
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      board[i][j] = ' ';
    }
  }
}

void printBoard() {
  // Print the current state of the board
  cout << "  0 1 2" << endl;
  for (int i = 0; i < Rows; i++) {
    cout << i << " ";
    for (int j = 0; j < Cols; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

bool checkWin(char player) {
  // Check if the player has won by checking all rows, columns, and diagonals
  for (int i = 0; i < Rows; i++) {
    // Check rows
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
      return true;
    }
    // Check columns
    if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
      return true;
    }
  }
  // Check diagonals
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
    return true;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
    return true;
  }
  return false;
}

int main() {
  initBoard();
  printBoard();

  // Game loop
  while (true) {
    // Get input from player X
    cout << "Player X, enter row and column separated by a space: ";
    int row, col;
    cin >> row >> col;
    board[row][col] = 'X';
    printBoard();
    if (checkWin('X')) {
      cout << "Player X wins!" << endl;
      break;
    }

    // Get input from player O
    cout << "Player O, enter row and column separated by a space: ";
    cin >> row >> col;
    board[row][col] = 'O';
    printBoard();
    if (checkWin('O')) {
      cout << "Player O wins!" << endl;
      break;
    }
  }

  return 0;
}
                                                           
//ALL CODE WRITTEN BY ChatGPT: https://chat.openai.com/chat
