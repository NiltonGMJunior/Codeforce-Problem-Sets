#   Codeforces
#   #867A   -   Between the Offices
#   http://codeforces.com/problemset/problem/867/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    no_days = int(input())
    locations = input()
    print("YES" if locations.count("SF") > locations.count("FS") else "NO")
