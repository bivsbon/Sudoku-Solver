#include "pch.h"
#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
	Board brd;
	brd.getInput();
	brd.solve();
	cout << endl;
	cout << "Solved!";
	
	getchar();
	return 0;
}
