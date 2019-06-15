//  Codeforces
//  #1031A    -    Golden Plate
//  https://codeforces.com/problemset/problem/1031/A
//  15/06/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
	// Width and height of the grid (3 <= w, h <= 100)
	unsigned short int w, h;
	std::cin >> w >> h;

	// Number of rings (1 <= k <= ceil((min(n, m) + 1) / 4))
	unsigned short int k;
	std::cin >> k;

	std::cout << 2 * k * (w + h - 4 * k + 2) << '\n';

	return 0;
}
