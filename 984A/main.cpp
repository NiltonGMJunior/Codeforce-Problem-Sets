//  Codeforces
//  #984A   -  Game
//  https://codeforces.com/problemset/problem/984/A
//  14/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <algorithm>

int main()
{
    // Numbers on the board (1 <= n <= 1000)
    unsigned short int n;
    std::cin >> n;

    // Declares a pointer to an array with n integers
    unsigned int *board = new unsigned int[n];

    // Reads the numbers in the board and stores them in the array
    for (unsigned short int iii = 0; iii < n; ++iii)
        std::cin >> board[iii];

    // Sorts the array
    std::sort(board, board + n);

    // After the array is sorted, the remaining number will always be the one in index k = (n - 1) div 2, where div is the integer division.
    std::cout << board[(n - 1) / 2] << '\n';

    return 0;
}