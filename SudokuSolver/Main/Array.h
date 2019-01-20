#pragma once
class Array
{
public:
	bool has(const int num) const;
	bool isCorrect() const;
	void setRowsArray(const int board[9][9], const int index);
	void setColumnsArray(const int board[9][9], const int index);
	void setBoxesArray(const int board[9][9], const int index);
private:
	int numbers[9];
};

