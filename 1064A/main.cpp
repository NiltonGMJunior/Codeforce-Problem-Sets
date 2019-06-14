//  Codeforces
//  #1064A   -  Make a triangle!
//  https://codeforces.com/problemset/problem/1064/A
//  13/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <algorithm>

int main()
{
    // Triangle sides.
    unsigned short int a, b, c;
    std::cin >> a >> b >> c;

    /* 
     * The following solution is derived from the triangle inequality.
     * A triangle will only have positive area (that is, won't be degenerate) when:
     * x >= y + z
     * The expression above should be valid for any of the sides.
     * For the sake of this problem, let's single out the side with maximum length (without loss of generality).
     * Let's also consider x to be the max(x, y, z). Then, an invalid triangle will satisfy the following:
     * I. sum(x, y, z) - 2 * max(a, b, c) <= 0
     * With x being the maximum value, this translates to:
     * II. y + z - x <= 0
     * In order for the area to be positive, we should sum a length greater than:
     * III. 2 * max(x, y, z) - sum(x, y, z) = x - y - z
     * With minimum increases of 1 unit of length, the value that makes the area of the triangle positive is:
     * IV. 1 + 2 * max(x, y, z) - sum(x, y, z) = 1 + x - y - z
     * If (I) is not satisfied, then the triangle is already valid, and no length should be added.
     */
    if (2 * std::max(std::max(a, b), c) >= a + b + c)
    {
        std::cout << 1 + 2 * std::max(std::max(a, b), c) - a - b - c << '\n';
    }
    else
    {
        std::cout << 0 << '\n';
    }

    return 0;
}