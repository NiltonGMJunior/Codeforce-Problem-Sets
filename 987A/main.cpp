//  Codeforces
//  #987A   -  Infinity Gauntlet
//  https://codeforces.com/problemset/problem/987/A
//  14/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <map>
#include <string>
#include <limits>

int main()
{
    // Number of absent gems in the Infinity Gauntlet
    unsigned short int m;
    std::cin >> m;

    // Infinity gems by color
    std::map<std::string, std::string> gems{{"purple", "Power"}, 
                                            {"green", "Time"}, 
                                            {"blue", "Space"},
                                            {"orange", "Soul"},
                                            {"red", "Reality"},
                                            {"yellow", "Mind"}};
    
    // Map iterator
    // std::map<std::string, std::string>::iterator it;

    // Absent gem color
    std::string color;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (unsigned short int _ = 0; _ < m; ++_)
    {
        std::getline(std::cin, color);
        // it = gems.find(color);
        gems.erase(color);
    }

    std::cout << 6 - m << '\n';

    for (auto& [color, gem] : gems)
    {
        std::cout << gem << '\n';
    }

    return 0;
}