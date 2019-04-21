//  Codeforces
//  #1146A   -   Love "A"
//  https://codeforces.com/problemset/problem/1146/A
//  21/04/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>

int main()
{
    // Input string
    std::string input;
    std::getline(std::cin, input);

    // Number of "a"s in string
    unsigned short int num_a = 0;
    
    // Counts "a"s in string
    for (char &ch : input)
        if (ch == 'a') num_a++;
    
    std::cout << (2 * num_a > input.size() ? input.size() : 2 * num_a - 1) << "\n";

    return 0;
}