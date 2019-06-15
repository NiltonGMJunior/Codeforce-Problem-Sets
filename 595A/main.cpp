//  Codeforces
//  #595A   -  Vitaly and Night
//  https://codeforces.com/problemset/problem/935/A
//  15/06/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
	// Number of floors (1 <= n <= 100) and number of flats per floor (1 <= m <= 100)
   	 unsigned short int n, m;
	std::cin >> n >> m;

	// Number of flats that have lights turned on (0 <= count <= n * m <= 10000)
	unsigned short int count = 0;
	
	// State of the lights from the window (0 for off, 1 for on)
	unsigned short int light1, light2;

	for (unsigned short int floor = 0; floor < n; ++floor)
		for (unsigned short int window = 0; window < m; ++window)
		{
			std::cin >> light1 >> light2;
			if (light1 + light2)
				count++;
		}	

	std::cout << count << '\n';

	return 0;
}
