//  Codeforces
//  #1005A   -   Tanya and Stairways
//  https://codeforces.com/problemset/problem/1005/A
//  01/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <cstring>

#define MAXN 1000

int main()
{
    // Ammount of numbers pronounced
    unsigned short int n;
    std::cin >> n;

    // Number of stairways
    unsigned short int stairways = 1;

    // Number of previous step
    unsigned short int last_steps[MAXN];
    memset(last_steps, 0, sizeof(last_steps[0]) * MAXN);

    // Number of current step
    unsigned short int current_step;

    std::cin >> current_step;
    last_steps[stairways - 1] = current_step;


    for (unsigned short int iii = 1; iii < n; ++iii)
    {
        std::cin >> current_step;
        if (current_step == 1)
            stairways++;
        last_steps[stairways - 1] = current_step;
    }

    std::cout << stairways << "\n";

    for (unsigned short int iii = 0; iii < stairways; ++iii)
    {
        std::cout << last_steps[iii] << " ";
    }

    std::cout << "\n";

    return 0;
}