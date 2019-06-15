//  Codeforces
//  #879A   -  Scarborough Fair
//  https://codeforces.com/problemset/problem/879/A
//  15/06/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
	// String length (1 <= n <= 100)
	unsigned short int n;
	std::cin >> n;

	// Number of operations (1 <= m <= 100)
	unsigned short int m;
	std::cin >> m;

	// String
	char* string = new char[n];
	std::cin >> string;

	// Start and end indexes of substring
	unsigned short int l, r;

	// Original and substitute chars
	char c1, c2;

	while(m--)
	{
		std::cin >> l >> r >> c1 >> c2;
		for (unsigned short int index = l - 1; index <= r - 1; ++index)
		{
			if (string[index] == c1)
				string[index] = c2;
		}	
	}

	std::cout << string << "\n";

	return 0;
}
