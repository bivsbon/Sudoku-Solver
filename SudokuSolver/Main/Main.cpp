#include "pch.h"
#include <iostream>
#include "Board.h"

int main()
{
	Board brd;
	brd.getInput();
	brd.print();

	std::getchar();
	return 0;
}
