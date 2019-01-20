#include "pch.h"
#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
	Board brd;
	brd.InitValidBoard();
	brd.solve();

	return 0;
}
