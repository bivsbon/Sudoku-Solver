#pragma once

class Board
{
public:
	void getInput();
	void InitValidBoard();
	void printValid() const;
	void print() const;
	bool checkSquare(const int i, const int j) const;
	void solve();
private:
	bool validBoard[9][9] = { false };
	int board[9][9];
};

