//  Codeforces
//  #994A   -  Fingerprints
//  https://codeforces.com/problemset/problem/994/A
//  06/07/2019
//  Nilton G. M. Junior

#include <iostream>
#include <vector>

int main()
{
    // Number of digits in the sequence (1 <= n <= 10) and numbers with fingerprints (1 <= m <= 10).
    unsigned short int n, m;
    std::cin >> n >> m;

    // n digits vector representing the sequence.
    std::vector<unsigned short int> seq;

    // Input sequence value (0 <= x <= 9).
    unsigned short int seq_input;
    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        std::cin >> seq_input;
        seq.push_back(seq_input);
    }

    // m digits vector representing the keys with fingerprints.
    std::vector<unsigned short int> keys;

    // Input keypad value with fingerprints (0 <= x <= 9).
    unsigned short int key_input;
    for (unsigned short int iii = 0; iii < m; ++iii)
    {
        std::cin >> key_input;
        keys.push_back(key_input);
    }

    // Since the input sequence and keypad sequence are small, an O(n^2) algorithm wouldn't be too costly.
    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        for (unsigned short int jjj = 0; jjj < m; ++jjj)
            if (keys[jjj] == seq[iii])
            {
                std::cout << keys[jjj] << ' ';
                break;
            }
    }

    std::cout << '\n';

    return 0;
}