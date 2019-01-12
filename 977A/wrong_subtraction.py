#   Codeforces
#   #977A   -   Wrong Subtraction
#   http://codeforces.com/problemset?order=BY_RATING_ASC
#   11/01/2019
#   Nilton G. M. Junior

if __name__ == '__main__':
    n, k = list(map(int, input().split()))
    for _ in range(k):
        if str(n)[-1] == "0":
            n = n // 10
        else:
            n -= 1
    print(n)
