//  Codeforces
//  #1167A   -  Telephone Number
//  https://codeforces.com/problemset/problem/1167/A
//  15/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>

bool is_telephone(const unsigned short int n, const std::string& string)
{
	if (n == 11 && string.substr(0, 1) == "8")
		return true;

	if (n > 11)
	{
		if (string.substr(0, 1) == "8")
			return is_telephone(n - 1, string.substr(0, n - 1));
		else
			return is_telephone(n - 1, string.substr(1, n - 1));
	}

	return false;
}


int main()
{
	// Number of test cases (1 <= t <= 100)
	unsigned short int t;
	std::cin >> t;

	// Length of the string (1 <= n <= 100)
	unsigned short int n;

	// String with telephone number
	std::string s;

	for (unsigned short int test_case = 0; test_case < t; ++test_case)
	{
		std::cin >> n >> s;
		std::cout << (is_telephone(n, s) ? "YES" : "NO") << '\n';
	}

	return 0;
}
