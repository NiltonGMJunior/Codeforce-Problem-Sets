//  Codeforces
//  #1015A   -   Points in Segments
//  https://codeforces.com/problemset/problem/1015/A
//  01/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <map>

int main()
{
    // Number of line segments and rightmost limit
    unsigned short int n, m;
    std::cin >> n >> m;

    // Points in the range [1, m] not contained in any of the segments
    std::map<unsigned short int, bool> points_map;
    for (unsigned short int iii = 1; iii <= m; ++iii)
        points_map.insert(std::pair<unsigned short int, bool>(iii, false));

    // Start and end points of a segment
    unsigned short int l, r;

    // Sets true to all points inside any of the segments
    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        std::cin >> l >> r;
        for (unsigned short int jjj = l; jjj <= r; ++jjj)
            points_map[jjj] = true;
    }

    // Count of points outside of the segments ranges
    unsigned short int count_out_points = m;

    // Counts points outside of the segments
    for (unsigned short int iii = 1; iii <= m; ++iii)
        if (points_map[iii])
            count_out_points--;

    std::cout << count_out_points << '\n';
    for (unsigned short int iii = 1, jjj = count_out_points; jjj > 0; ++iii)
        if (!points_map[iii])
        {
            jjj--;
            std::cout << iii << ' ';
        }
    std::cout << '\n';
    return 0;
}