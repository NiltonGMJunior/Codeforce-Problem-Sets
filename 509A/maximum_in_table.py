#   Codeforces
#   #509A   -  Maximum in Table
#   http://codeforces.com/problemset/problem/509/A
#   12/01/2019
#   Nilton G. M. Junior

def factorial(n):
    return 1 if n == 0 else n * factorial(n - 1)

if __name__ == '__main__':
    n = int(input())
    print(factorial(2 * (n - 1)) // (factorial(n - 1)) ** 2)
