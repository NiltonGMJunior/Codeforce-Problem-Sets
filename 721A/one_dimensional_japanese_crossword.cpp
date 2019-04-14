//  Codeforces
//  #721A   -   One-Dimensional Crossword Puzzles
//  https://codeforces.com/problemset/problem/721/A
//  13/04/2019
//  Nilton G. M. Junior

#include <bits/stdc++.h>

int main()
{
    // Length of the input string (1 <= n <= 100)
    unsigned short int n;
    std::cin >> n;

    // String with 'B' or 'W' chars in the row
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string row;
    std::getline(std::cin, row);

    // Array initialized with 0, length of groups of black squares will fill the array
    int blk_groups[100];
    std::memset(blk_groups, 0, sizeof(blk_groups));

    // Number of groups of black cells
    unsigned short int num_groups { 0 };

    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        if (row[iii] == 'B')
        {
            num_groups++;
            do
            {
                blk_groups[num_groups - 1]++;
                iii++;
            } while (row[iii] == 'B');
        }
    }

    std::cout << num_groups << "\n";
    for (unsigned short int iii = 0; iii < num_groups; ++iii)
    {
        std::cout << blk_groups[iii] << " ";
    }

    std::cout << "\n";

    return 0;
}