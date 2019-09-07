//  Codeforces
//  #1173A   -  Nauuo and Votes
//  https://codeforces.com/problemset/problem/1173/A
//  07/07/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
	// Number of down votes, up votes and unknown votes, x, y, z (0 <= x, y, z <= 100).
	unsigned short int x, y, z;
	std::cin >> x >> y >> z;

	if (x > y + z)
		std::cout << "+\n";
	else if (y > x + z)
		std::cout << "-\n";
	else if (x == y && z == 0)
		std::cout << "0\n";
	else
		std::cout << "?\n";

	return 0;
}
