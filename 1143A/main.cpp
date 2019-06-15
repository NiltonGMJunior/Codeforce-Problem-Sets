//  Codeforces
//  #1143A   -  The Doors
//  https://codeforces.com/problemset/problem/1143/A
//  15/06/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
	// Number of doors (2 <= n <= 200000)
	unsigned int n;
	std::cin >> n;

	// Index of last left and right doors
	unsigned int l = 0, r = 0;

	// Current door
	unsigned short int door;

	for (unsigned int opened_doors = 1; opened_doors <= n; ++opened_doors)
	{
		std::cin >> door;
		if (door)
			r = opened_doors;
		else
			l = opened_doors;
	}

	std::cout << (l <= r ? l : r) << '\n';

	return 0;
}
