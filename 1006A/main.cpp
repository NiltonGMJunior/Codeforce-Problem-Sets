//  Codeforces
//  #1006A   -   Adjacent Replacements
//  https://codeforces.com/problemset/problem/1006/A
//  13/04/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
    // Length of the array (1 <= n <= 1000).
    unsigned short int n;
    std::cin >> n;

    // Array with n elements arr[1..n] (1 <= arr[i] <= 1e9).
    unsigned int *arr = new unsigned int[n];
    if (!arr)
    {
        std::cout << "FAILED TO ALLOCATE MEMORY. EXITING PROGRAM.\n";
        exit(-1);
    }

    // Reading array's elements
    for (unsigned short int ind = 0; ind < n; ++ind)
    {
        std::cin >> arr[ind];
        if (arr[ind] % 2 == 0)
            arr[ind] -= 1;
        std::cout << arr[ind] << ' ';
    }

    std::cout << '\n';

    // Freeing array memory
    delete[] arr;

    return 0;
}