//  Codeforces
//  #1139A   -  Even Substrings
//  https://codeforces.com/problemset/problem/1139/A
//  14/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>
#include <limits>

int main()
{
    // String length (1 <= n <= 65000).
    unsigned short n;
    std::cin >> n;

    // Input string.
    std::string input_string;

    // Ignores new line character.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Reads the next line as the input_string.
    std::getline(std::cin, input_string);

    // Count of even substrings. The count can't exceed n * (n + 1) / 2.
    unsigned int count_even = 0;

    // 
    for (unsigned short int l = 1; l <= n; ++l)
        if (std::stoi(input_string.substr(l - 1, 1)) % 2 == 0)
            count_even += l;

    // Prints out the result
    std::cout << count_even << '\n';

    return 0;
}