#include "pch.h"
#include "Array.h"

bool Array::has(const int num) const
{
	for (int i = 0; i < 9; i++)
		if (numbers[i] == num)
			return true;
	return false;
}

bool Array::isValid() const
{
	if (has(0))
		return false;

	for (int i = 1; i <= 9; i++)
		if (!has(i))
			return false;
	return true;
}

void Array::setRowsArray(const int board[9][9], const int index)
{
	for (int i = 0; i < 9; i++)
		numbers[i] = board[index][i];
}

void Array::setColumnsArray(const int board[9][9], const int index)
{
	for (int i = 0; i < 9; i++)
		numbers[i] = board[i][index];
}

void Array::setBoxesArray(const int board[9][9], const int index)
{
	int topLeftX = (index / 3) * 3;
	int topLeftY = (index % 3) * 3;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			numbers[i * 3 + j] = board[topLeftX + i][topLeftY + j];
}
