//  Codeforces
//  #1092B   -   Teams Forming
//  https://codeforces.com/problemset/problem/1092/B
//  08/06/2019
//  Nilton G. M. Junior

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // Reads number of students n (even number)
    unsigned short int n;
    std::cin >> n;

    // Vector with students' skills
    std::vector<unsigned short int> skills;

    // Reads the students' skills
    unsigned short int skill;
    for (unsigned short int iii = 0; iii < n; ++iii)
    {
        std::cin >> skill;
        skills.push_back(skill);
    }

    // Sorts the vector
    std::sort(skills.begin(), skills.end());

    // Sums the skill difference
    unsigned short int skill_diff = 0;

    // Verifies each pair for the skill difference
    for (unsigned short int iii = 0; iii < n / 2; ++iii)
        skill_diff += skills[2 * iii + 1] - skills[2 * iii];

    // Prints out the result
    std::cout << skill_diff << "\n";

    return 0;
}