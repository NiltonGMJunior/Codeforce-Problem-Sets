//  Codeforces
//  #1093A   -   Dice Rolling
//  https://codeforces.com/problemset/problem/1093/A
//  13/06/2019
//  Nilton G. M. Junior

#include <iostream>


int main()
{
    // Number of queries
    unsigned short int t;
    std::cin >> t;

    // Desired number of points and number fo rolls
    unsigned short int x, rolls;

    // Loops one time for each query
    for (unsigned short int _ = 0; _ < t; ++_)
    {
        // Reads the desired number of points
        std::cin >> x;

        // Counts the number of rolls
        rolls = (x / 7) + (x % 7 == 0 ? 0 : 1);

        // Prints the result for the query
        std::cout << rolls << "\n";
    }

    return 0;
}