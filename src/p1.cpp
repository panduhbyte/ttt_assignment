/*
In this project, you will implement the tic-tac-toe game for a 3 by 3 square.
The game will be played by two players (players A and B).
All output are to the console. Follow these guidelines:

1)	Draw the board (ensure its nicely formatted as a square)
	after each move and make sure to prompt the user with enough information on what to input;
	if the user tries to use an occupied space, then he effectively loses his move (no redoes!);
	any illegal characters input also results in loss of the move (your implementation will check for all this).

2)	You are given the outline of the program that you can use to start the project.
	Make sure you test your implementation well against boundary cases, illegal input, etc.

3)	Turn in your source file to Canvas by the deadline.
	There will be no extensions or late credit.
 */
#include <iostream>
using namespace std;

char board[9] = {'1', '2', '3',	// Basic board.
				'4', '5', '6',
				'7', '8', '9'};
int player;

void draw(){
	cout << "[ "<< board[0] << " ]";
	cout << "[ "<< board[1] << " ]";
	cout << "[ "<< board[2] << " ]\n"; // End of 1st row.
	cout << "[ "<< board[3] << " ]";
	cout << "[ "<< board[4] << " ]";
	cout << "[ "<< board[5] << " ]\n"; // End of 1st row.
	cout << "[ "<< board[6] << " ]";
	cout << "[ "<< board[7] << " ]";
	cout << "[ "<< board[8] << " ]\n"; // End of 1st row.
}

void play(int player){
			// this function contains  the game logic
			// assume a move by player A, followed by player B
			// after each move, you must check if the respective player
			// has won, in which case the game is complete; use a separate
			// function to accomplish this.
			// players will enter the position where they want to enter in
			// the tic-tac-toe square. Assume the numbering from 1 to 9 
			// in row-major order 
			// use cin and cout for input and output

}

// This function determines if the game has ended - either a row, column or
// a diagonal should be filled with the same character for it to be complete.

bool check(){
	bool r;
	// Checks rows.
	if 		(board[0] == board[1] && board[1] == board[2]) r = true;
	else if (board[3] == board[4] && board[4] == board[5]) r = true;
	else if (board[6] == board[7] && board[7] == board[8]) r = true;
	// Checks columns.
	else if (board[0] == board[3] && board[3] == board[6]) r = true;
	else if (board[1] == board[4] && board[4] == board[7]) r = true;
	else if (board[2] == board[5] && board[5] == board[8]) r = true;
	// Checks diagonals.
	else if (board[0] == board[4] && board[4] == board[8]) r = true;
	else if (board[2] == board[4] && board[4] == board[6]) r = true;
	else r = false;

	return r;
}


int main(){

	return 0;
}
