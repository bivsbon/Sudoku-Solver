#include "pch.h"
#include "Board.h"
#include <iostream>

using namespace std;

void Board::getInput()
{
	cout << "Type in input row by row, seperate by spacebar and enter at the end of rows" << endl;
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << "Input row " << i + 1 << ": ";
		for (int j = 0; j < 9; j++)
			cin >> board[i][j];
	}

	InitValidBoard();
}

void Board::InitValidBoard()
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (board[i][j] != 0)
				validBoard[i][j] = true;
}

void Board::printValid() const
{
	for (int i = 0; i < 9; i++)
	{
		cout << "Row " << i + 1 << ":   ";
		for (int j = 0; j < 9; j++)
			cout << validBoard[i][j] << " ";
		cout << endl;
	}
}

void Board::print() const
{
	char vLine = static_cast<char>(179);
	char hLine = static_cast<char>(196);
	char cross = static_cast<char>(197);

	for (int i = 0; i < 9; i++)
	{ 
		if (i % 3 == 0 && i != 0)
		{
			for (int a = 0; a < 21; a++)
			{
				if (a % 7 == 0 && a != 0)
					cout << cross;
				cout << hLine;
			}
			cout << endl;
		}

		for (int j = 0; j < 9; j++)
		{
			if (j % 3 == 0 && j != 0)
				cout << " " << vLine;
			cout << " " << board[i][j];
		}
		cout << endl;
	}
}

bool Board::checkSquare(const int i, const int j) const
{

	//Check the row
	for (int a = 0; a < 9; a++)
	{
		if (a == j) continue;
		else if (board[i][a] == board[i][j]) return false;
	}

	// Check the column
	for (int a = 0; a < 9; a++)
	{
		if (a == i) continue;
		else if (board[a][j] == board[i][j]) return false;
	}

	//Check the box
	const int boxIndex = (i / 3) * 3 + (j / 3);
	const int topLeftX = (boxIndex / 3) * 3;
	const int topLeftY = (boxIndex % 3) * 3;

	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 3; b++)
		{
			if (topLeftX + a == i && topLeftY + b == j) continue;
			else if (board[topLeftX + a][topLeftY + b] == board[i][j]) return false;
		}

	return true;
}

void Board::solve()
{
	int pos = 0;
	int direction = 1;
	while (pos < 81)
	{
		
		const int i = pos / 9;
		const int j = pos % 9;

		if (validBoard[i][j])
		{
			;
		}
		else
		{
			do
			{
				board[i][j]++;
			} while (board[i][j] < 10 && !checkSquare(i, j));
			direction = 1;

			if (board[i][j] == 10)
			{
				board[i][j] = 0;
				direction = -1;
			}
		}
		system("cls");
		print();

		pos += direction;
	}
}

