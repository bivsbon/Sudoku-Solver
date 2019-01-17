#include "pch.h"
#include <iostream>
#include "Board.h"

int main()
{
	Board brd;
	brd.getInput();
	brd.print();

	if (brd.isValid())
	{
		std::cout << "It's correct!" << std::endl;
	}
	else
	{
		std::cout << "It's wrong!" << std::endl;
	}

	std::getchar();
	return 0;
}
