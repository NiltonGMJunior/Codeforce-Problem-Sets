//  Codeforces
//  #1154A   -   Restoring Three Numbers
//  https://codeforces.com/problemset/problem/1154/A
//  17/04/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
    unsigned int input[4];
    unsigned int largest_ind = 0;
    for (unsigned short int iii = 0; iii < 4; ++iii) 
    {
        std::cin >> input[iii];
        if (input[iii] > input[largest_ind]) largest_ind = iii;
    }
    for (unsigned short int iii = 0; iii < 4; ++iii)
    {
        if (iii != largest_ind)
        {
            std::cout << input[largest_ind] - input[iii] << " ";
        }
    }

    return 0;
}