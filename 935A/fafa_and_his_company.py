#   Codeforces
#   #935A   -   Fafa and his Company
#   http://codeforces.com/problemset/problem/935/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    num_employees = int(input())
    possible_ways = 0
    for num_leaders in range(1, num_employees // 2 + 1):
        if num_employees % num_leaders == 0:
            possible_ways += 1
    print(possible_ways)
