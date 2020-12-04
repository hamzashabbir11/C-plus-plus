#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

void board(char square[])
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_hhhhhhh____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}


int checkwin(char square[])
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}
void main()
{
	char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
	int player = 1, i,move;

	char mark;
	do
	{
		board(square);

		if (player % 2 == 1)
			player = 1;
		else
			player = 2;


		// player 2
		if (player == 2)
		{
			cout << "Players  " << player << endl;
			cout << "Press Enter for CPU" << endl;
			move = rand() % 9;
			mark = 'O';
			int turn = 1;
			int placed = 0;
			while (placed == 0)
			{

				if (move == 1 && square[1] == '1') {
					square[1] = mark;
					placed = 1;
				}
				else if (move == 2 && square[2] == '2') {

					square[2] = mark;
					placed = 1;
				}
				else if (move == 3 && square[3] == '3') {

					square[3] = mark;
					placed = 1;
				}
				else if (move == 4 && square[4] == '4') {

					placed = 1;
					square[4] = mark;
				}
				else if (move == 5 && square[5] == '5') {

					square[5] = mark;
					placed = 1;
				}
				else if (move == 6 && square[6] == '6') {

					square[6] = mark;
					placed = 1;
				}
				else if (move == 7 && square[7] == '7') {

					square[7] = mark;
					placed = 1;
				}
				else if (move == 8 && square[8] == '8') {

					square[8] = mark;
					placed = 1;
				}
				else if (move == 9 && square[9] == '9') {

					square[9] = mark;
					placed = 1;
				}

				else
				{
					move = rand() % 9;
				}
			}
			i = checkwin(square);
			player++;
			_getche();
			board(square);
		}

		// player 1
		else if (player == 1)
		{
			cout << "Players  " << player << ", enter a number:  ";
			cin >> move;
			mark = 'X';
			char haha = '1';
			for (int counter; counter <= 9, counter++;)
			{
				if (move == counter && square[counter] == 'haha')
					haha++;


				square[counter] = mark;
			}
			else if (move == 2 && square[2] == '2')

				square[2] = mark;
			else if (move == 3 && square[3] == '3')

				square[3] = mark;
			else if (move == 4 && square[4] == '4')

				square[4] = mark;
			else if (move == 5 && square[5] == '5')

				square[5] = mark;
			else if (move == 6 && square[6] == '6')

				square[6] = mark;
			else if (move == 7 && square[7] == '7')

				square[7] = mark;
			else if (move == 8 && square[8] == '8')

				square[8] = mark;
			else if (move == 9 && square[9] == '9')

				square[9] = mark;
			else
			{
				cout << "Invalid move ";

				player--;
				_getche();
			}
			i = checkwin(square);

			player++;
		}
	} while (i == -1);
	board(square);
	if (i == 1)

		cout << "Congratulations \nPlayer " << --player << " win ";
	else
		cout << " Game draw ";

	_getche();
}