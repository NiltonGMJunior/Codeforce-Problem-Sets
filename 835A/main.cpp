//  Codeforces
//  #835A   -   Repeating Cypher
//  https://codeforces.com/problemset/problem/835/A
//  21/04/2019
//  Nilton G. M. Junior

#include <iostream>

int main()
{
    unsigned short int s, v1, v2, t1, t2;
    std::cin >> s >> v1 >> v2 >> t1 >> t2;

    if (s * v1 + 2 * t1 == s * v2 + 2 * t2) std::cout << "Friendship\n";
    else if (s * v1 + 2 * t1 < s * v2 + 2 * t2) std::cout << "First\n";
    else std::cout << "Second\n";

    return 0;
}