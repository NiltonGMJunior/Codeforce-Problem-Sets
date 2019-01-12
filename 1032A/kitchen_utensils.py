#   Codeforces
#   #1032A   -   Kitchen Utensils
#   http://codeforces.com/problemset/problem/1032/A
#   11/01/2019
#   Nilton G. M. Junior

# TODO: This code still doesn't work for the following input:
# 100 10
# 75 75 75 75 30 53 75 31 75 62 44 44 69 76 57 31 75 83 75 13 56 59 30 75 27 56 75 75 47 31 79 75 30 20 31 8 75 75 30 20 75 31 31 75 75 4 52 75 44 20 31 66 55 75 75 75 31 75 33 42 31 82 14 31 75 75 75 75 31 80 31 30 75 88 31 75 69 75 31 75 30 75 44 17 75 75 35 75 75 75 75 75 56 44 75 75 44 75 20 31
# To which the expected result is 1400 and the produced result is 200

import math


def get_most_used(utensils):
    max_occur = 0
    for utensil in set(utensils):
        if utensils.count(utensil) > max_occur:
            most_used = utensil
    return most_used


if __name__ == '__main__':
    rem_utensils, num_guests = list(map(int, input().split()))
    utensils = list(map(int, input().split()))
    utensils_set = set(utensils)
    num_of_dishes = math.ceil(utensils.count(get_most_used(utensils)) / num_guests)
    min_utensils = num_of_dishes * num_guests * len(utensils_set)
    print(min_utensils - rem_utensils)
