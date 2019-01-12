#   Codeforces
#   #1030A   -   In Search of an Easy Problem
#   http://codeforces.com/problemset/problem/1030/A
#   11/01/2019
#   Nilton G. M. Junior

if __name__ == '__main__':
    n = int(input())
    opinions = list(map(int, input().split()))
    print("HARD" if 1 in opinions else "EASY")
