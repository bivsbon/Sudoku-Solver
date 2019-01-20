#include "pch.h"
#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
	Board brd;
	brd.print();

	cout << brd.checkSquare(0, 2) << endl;

	return 0;
}
