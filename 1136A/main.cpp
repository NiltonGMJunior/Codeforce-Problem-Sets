//  Codeforces
//  #1136A   -  Nastya Is Reading a Book
//  https://codeforces.com/problemset/problem/1136/A
//  13/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <map>
#include <tuple>

int main()
{
    // Number of chapters
    unsigned short int n;
    std::cin >> n;

    // First and last page of each chapter
    unsigned short int l, r;

    // Map that correlates the number of the chapter with the start and end pages
    std::map<unsigned short int, std::tuple<unsigned short int, unsigned short int>> chapters;

    // Loops that fills the map with chapter information
    for (unsigned short int chapter = 0; chapter < n; ++chapter)
    {
        std::cin >> l >> r;
        chapters[chapter] = std::tuple<unsigned short int, unsigned short int>(l, r);
    }

    // First unread page
    unsigned short int k;
    std::cin >> k;

    // Searchs the last read chapter
    unsigned short int last_read_chapter = 1;
    for (unsigned short int chapter = 0; chapter < n; ++chapter, ++last_read_chapter)
    {
        if (std::get<1>(chapters[chapter]) >= k)
        {
            last_read_chapter--;
            break;
        }
    }

    // Prints the result
    std::cout << n - last_read_chapter << '\n';

    return 0;
}