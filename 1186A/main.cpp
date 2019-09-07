//  Codeforces
//  #1186A   -  Vus the Cossack and a Contest
//  https://codeforces.com/problemset/problem/1186/A
//  07/07/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
	// n is  the number of participants, m is the number of pens and k is the number of notebooks.
	// 1 <= n, m, k <= 100

	unsigned short int n, m, k;
	std::cin >> n >> m >> k;

	if (m >= n and k >= n)
		std::cout << "Yes\n";
	else
		std::cout << "No\n"; 

	return 0;
}
