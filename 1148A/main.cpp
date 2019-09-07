//  Codeforces
//  #1148A   -  Another ONe Bites The Dust
//  https://codeforces.com/problemset/problem/1148/A
//  07/07/2019
//  Nilton G. M. Junior

#include <iostream>
#include <algorithm>

int main()
{
	// Number of 'a', 'b' and "ab" strings, a, b, c (1 <= a, b, c <= 1e9).
	unsigned long int a, b, c;
	std::cin >> a >> b >> c;


	if (abs(a - b) <= 1)
		std::cout << (a + b + (2 * c)) << "\n";
	else
		std::cout << 2 * std::min(a, b) + 1 + 2 * c << "\n";

	return 0;
}
