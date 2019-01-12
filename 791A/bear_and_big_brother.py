#   Codeforces
#   #791A   -   Bear and Big Brother
#   http://codeforces.com/problemset/problem/791/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    limak, bob = list(map(int, input().split()))
    years = 0
    while limak <= bob:
        years += 1
        limak, bob = 3 * limak, 2 * bob
    print(years)
