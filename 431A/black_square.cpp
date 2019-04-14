//  Codeforces
//  #431A   -   Black Square
//  https://codeforces.com/problemset/problem/431/A
//  13/04/2019
//  Nilton G. M. Junior

#include <iostream>
#include <string>
#include <limits>

int main()
{
    // Initializes an array "a" with 4 elements (all zeros).
    // Each element at index "i" represents the amount of calories spent to touch the strip at "i + 1".
    int a[4] { 0 };
    std::cin >> a[0] >> a[1] >> a[2] >> a[3];

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // String that contais the order in which black squares appear at the screen
    std::string blk_sq;
    std::getline(std::cin, blk_sq);

    // Total calories spent
    int total_calories(0);

    for (auto &strip : blk_sq)
    {
        total_calories += a[strip - '1'];
    }

    std::cout << total_calories << "\n";

    return 0;
}