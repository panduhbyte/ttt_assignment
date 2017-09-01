/*
 * Simple Tic-Tac-Toe
 * by Charles Valdez
 */
#include <iostream>
using namespace std;

char board[9];

// Prints the board.
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

// Compares rows, columns, and diagonals for equal characters
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

// Tic-tac-toe logic. Takes in integer to state who's turn it is and which char to place within array.
void play(int player){
	int box;

	char xo;
	if(player == 1) xo = 'X';
	else xo = 'O';

	draw();

	cout << "Player " << player << " enter a number 1-9.\n";
	if( !(cin >> box) ){ // Checks for integer
		cin.clear();
		cin.ignore();
		cout << "Your entry is invalid and turn is skipped.\n";
	}
	else if(box > 9 || box < 1){ // Check if int is 1-9
		cout << "Your entry is invalid and turn is skipped.\n";
	}
	else{
		box = box - 1;
		if(board[box] == 'X' || board[box] == 'O'){ // Checks if location is already used
			cout << "You've chosen an occupied space and turn is skipped.\n";
		}
		else board[box] = xo;
	}
}


int main(){

	board[0] = '1';
	board[1] = '2';
	board[2] = '3';
	board[3] = '4';
	board[4] = '5';
	board[5] = '6';
	board[6] = '7';
	board[7] = '8';
	board[8] = '9';

	int player = 1;
	int i = 0;
	bool end_game = false;

	do{
		play(player);
		end_game = check();
		i = i + 1;

		if(end_game == true){
			cout << "Player " << player << " has won.\n";
			draw();
			return 0;
		}
		else if(player == 1) player = 2;
		else player = 1;
	}while(i < 9); // Set only for 9 turns. Quick. Simple. No redoes.

	if (end_game == false) cout << "Cat's game.\n";
	draw();
	return 0;
}
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
