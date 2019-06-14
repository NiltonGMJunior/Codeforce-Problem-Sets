//  Codeforces
//  #1080A   -   Petya and Origami
//  https://codeforces.com/problemset/problem/1080/A
//  14/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>
#include <cmath>

int main()
{
    // Number of friends (1 <= n <= 1e8) and number of pages in a notebook (1 <= k <= 1e8)
    unsigned int n, k;
    std::cin >> n >> k;

    unsigned int red_notebooks, green_notebooks, blue_notebooks;
    red_notebooks = std::ceil(n * 2.0 / k);
    green_notebooks = std::ceil(n * 5.0 / k);
    blue_notebooks = std::ceil(n * 8.0 / k);

    std::cout << red_notebooks + green_notebooks + blue_notebooks << '\n';

    return 0;
}