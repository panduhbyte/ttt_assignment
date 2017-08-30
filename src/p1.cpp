#include <iostream>

using namespace std;

void draw();
void play();
bool game(char *ttt);

int main() {

	char board[9] = {1, 2, 3,	// Basic board.
					4, 5, 6,
					7, 8, 9};
	const int Ex = 1;
	const int Oh = 2;

	draw(ttt);

	play(ttt);

	return 0;
}

void playTicTacToe (char *ttt) {
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

// This function draws the tic-tac-toe square after each move
void draw(char *ttt) {
	cout << << endl;
}


// This function determines if the game has ended - either a row, column or
// a diagonal should be filled with the same character for it to be complete.

bool gameComplete(char *ttt) {
}
