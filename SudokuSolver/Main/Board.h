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
	int board[9][9];
	Array rows[9];
	Array columns[9];
	Array boxes[9];
};

