#pragma once

#include "Array.h"

class Board
{
public:
	void getInput();
	void print() const;
	void setAttr();
private:
	int board[9][9];
	Array rows[9];
	Array columns[9];
	Array boxes[9];
};

