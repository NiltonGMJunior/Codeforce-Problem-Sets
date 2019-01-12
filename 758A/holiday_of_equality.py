#   Codeforces
#   #758A   -  Holiday Of Equality
#   http://codeforces.com/problemset/problem/758/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    no_citizens = int(input())
    welfares = list(map(int, input().split()))
    max_welfare = max(welfares)
    expense = 0
    for welfare in welfares:
        expense += max_welfare - welfare
    print(expense)
