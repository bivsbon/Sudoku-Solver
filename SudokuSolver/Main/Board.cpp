#include "pch.h"
#include "Board.h"
#include <iostream>

void Board::getInput()
{
	std::cout << "Type in input row by row, seperate by spacebar and enter at the end of rows" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Input row " << i + 1 << ": ";
		for (int j = 0; j < 9; j++)
			std::cin >> board[i][j];
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
		std::cout << "Row " << i + 1 << ":   ";
		for (int j = 0; j < 9; j++)
			std::cout << validBoard[i][j] << " ";
		std::cout << std::endl;
	}
}

void Board::print() const
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Row " << i + 1 << ":   ";
		for (int j = 0; j < 9; j++)
			std::cout << board[i][j] << " ";
		std::cout << std::endl;
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

