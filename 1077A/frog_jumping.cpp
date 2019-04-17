//  Codeforces
//  #1077A   -   Frog Jumping
//  https://codeforces.com/problemset/problem/1077/A
//  16/04/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
    // NUmber of queries
    unsigned short int t;
    std::cin >> t;

    // Test parameters
    long long int a, b, k;

    // Loops through each query
    for (unsigned short int _ = 0; _ < t; ++_)
    {
        // Reads parameters
        std::cin >> a >> b >> k;
        if (k % 2 == 0)
            std::cout << (a - b) * k / 2 << "\n";
        else
            std::cout << (a - b) * (k + 1) / 2 + b << "\n";
    }

    return 0;
}