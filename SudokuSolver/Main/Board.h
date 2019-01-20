#pragma once

#include "Array.h"

class Board
{
public:
	void getInput();
	void InitValidBoard();
	void print() const;
	void setAttr();
	bool isValid();
private:
	bool validBoard[9][9] = { false };
	int board[9][9] = { {1, 7, 0, 9, 8, 0, 0, 0, 0},
						{0, 0, 4, 6, 1, 0, 0, 0, 3},
						{2, 0, 0, 0, 0, 4, 1, 9, 0},
						{7, 0, 6, 0, 0, 8, 0, 3, 0},
						{0, 4, 0, 7, 0, 3, 0, 6, 0},
						{0, 3, 0, 1, 0, 0, 5, 0, 4},
						{0, 5, 9, 2, 0, 0, 0, 0, 8},
						{4, 0, 0, 0, 3, 5, 6, 0, 0},
						{0, 0, 0, 0, 6, 9, 0, 2, 0} };
	Array rows[9];
	Array columns[9];
	Array boxes[9];
};

