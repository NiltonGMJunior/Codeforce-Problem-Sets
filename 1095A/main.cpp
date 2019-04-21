//  Codeforces
//  #1095A   -   Repeating Cypher
//  https://codeforces.com/problemset/problem/1095/A
//  21/04/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>
#include <cstring>
#include <math.h>

int main()
{
    // Input and output strings
    char input[60], output[60] = "";

    // Length of inut string
    unsigned short int n;
    std::cin >> n;

    // Reads input
    scanf("%s", input);

    for (unsigned short int iii = 0, jjj = 0; jjj < (static_cast<int>(pow(1 + 8 * n, 0.5)) - 1) / 2 ; ++jjj, iii += jjj)
        output[jjj] = input[iii];
    
    printf("%s\n", output);

    return 0;
}