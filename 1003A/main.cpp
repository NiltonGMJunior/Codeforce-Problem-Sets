//  Codeforces
//  #1003A   -   Polycarp's Pockets
//  https://codeforces.com/problemset/problem/1003/A
//  21/04/2019
//  Nilton G. M. Junior

#include <iostream>
#include <cstring>

int main()
{
    // Number of coins
    unsigned short int n;
    std::cin >> n;

    // Array of coin counts per value
    unsigned short int count[100];
    memset(count, 0, sizeof(count[0]));

    // Maximum count of any particular coin
    unsigned short int max_count = 0;

    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        unsigned short int value;
        std::cin >> value;
        if (++count[value - 1] > max_count) max_count = count[value - 1];
    }

    std::cout << max_count << "\n";

    return 0;
}