//  Codeforces
//  #1017A   -   The Rank
//  https://codeforces.com/problemset/problem/1017/A
//  08/06/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
    // Number of students
    unsigned short int n;
    std::cin >> n;

    // Grades
    unsigned short int a, b, c, d;

    // Thomas' grades
    std::cin >> a >> b >> c >> d;
    unsigned short int thomas = a + b + c + d;

    // Thomas' rank
    unsigned short int rank = 1;

    // Other students
    unsigned short int grades_sum;
    for (unsigned short int iii = 1; iii < n; ++iii)
    {
        std::cin >> a >> b >> c >> d;
        grades_sum = a + b + c + d;

        if (grades_sum > thomas)
            rank++;
    }

    // Result
    std::cout << rank << "\n";

    return 0;
}