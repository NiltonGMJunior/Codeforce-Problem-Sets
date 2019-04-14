//  Codeforces
//  #1006A   -   Adjacent Replacements
//  https://codeforces.com/problemset/problem/1006/A
//  13/04/2019
//  Nilton G. M. Junior

#include <bits/stdc++.h>

int main()
{
    // Size of array (1 <= n <= 100)
    unsigned short int n;
    std::cin >> n;

    // Creates an array with size n with the integers
    unsigned int *arr = (unsigned int*) malloc(sizeof(unsigned int) * n);

    // Sets a minimum and maximum value for the elements of the array
    unsigned int min { 1 };
    unsigned int max { 1 };

    // Reads the array and updates max and min values
    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        std::cin >> arr[iii];
        if (arr[iii] > max) max = arr[iii];
        else if (arr[iii] < min) min = arr[iii];
    }

    // Starts searching from current value as minimum
    unsigned int current = min;

    while (current <= max)
    {
        
    }

    free(arr);
    arr = nullptr;

    return 0;
}