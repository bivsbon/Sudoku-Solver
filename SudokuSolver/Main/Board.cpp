#include "pch.h"
#include "Board.h"
#include <iostream>

void Board::getInput()
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Input row" << i + 1 << ": ";
		for (int j = 0; j < 9; j++)
			std::cin >> board[i][j];
	}

	setAttr();
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

void Board::setAttr()
{
	for (int i = 0; i < 9; i++)
	{
		rows[i].setRowsArray(board, i);
		columns[i].setColumnsArray(board, i);
		boxes[i].setBoxesArray(board, i);
	}
}
