#include "pch.h"
#include <iostream>
#include "Board.h"
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
	Board brd;
	brd.getInput();

	// Solve and count solving time
	auto start = steady_clock::now();
	brd.solve();
	auto end = steady_clock::now();
	const duration<float> time = end - start;
	float solvingTime = time.count();

	cout << endl;
	cout << "Solved! " << "(" << solvingTime << " seconds )" << endl;
	
	getchar();
	return 0;
}
