//  Codeforces
//  #855A   -  Tom Riddle's Diary
//  https://codeforces.com/problemset/problem/855/A
//  07/07/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	// Number of names, n (1 <= n <= 100).
	unsigned short int n;
	std::cin >> n;

	// Vector and iterator for the names list.
	std::vector<std::string> names;
	std::vector<std::string>::iterator names_it;

	// String input.
	std::string new_name;

	while(n--)
	{
		std::cin >> new_name;

		names_it = std::find(names.begin(), names.end(), new_name);
		if (names_it == names.end())
			std::cout << "NO\n";
		else
			std::cout << "YES\n";
		
		names.push_back(new_name);
	}

	return 0;
}
