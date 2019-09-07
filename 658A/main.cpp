//  Codeforces
//  #658A   -  Bear and Reverse Radewoosh
//  https://codeforces.com/problemset/problem/658/A
//  07/07/2019
//  Nilton G. M. Junior

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	// Number of problems (1 <= n <= 50), and rate of points loss (1 <= c <= 1000).
	unsigned short int n, c;
	std::cin >> n >> c;

	// Arrays with the number of points per problem, and time to solve each problem (1 <= p, t <= 1000).
	std::vector<unsigned short int> points, times;

	// Points for each problem.
	unsigned short int points_input;
	for (unsigned short int ind = 0; ind < n; ++ind)
	{
		std::cin >> points_input;
		points.push_back(points_input);
	}

	// Time for each problem.
	unsigned short int time_input;
	for (unsigned short int ind = 0; ind < n; ++ind)
	{
		std::cin >> time_input;
		times.push_back(time_input);
	}

	unsigned short int limak_points = 0, limak_time = 0;
	unsigned short int radewoosh_points = 0, radewoosh_time = 0;
	for (unsigned short int ind = 0; ind < n; ++ind)
	{
		limak_time += times[ind];
		limak_points += std::max(0, points[ind] - c * limak_time);

		radewoosh_time += times[n - ind - 1];
		radewoosh_points += std::max(0, points[n - ind - 1] - c * radewoosh_time);
	}

	if (limak_points > radewoosh_points)
		std::cout << "Limak\n";
	else if (limak_points < radewoosh_points)
		std::cout << "Radewoosh\n";
	else
		std::cout << "Tie\n";

	return 0;
}
