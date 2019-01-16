#   Codeforces
#   #1102A   -   Integer Sequence Dividing
#   https://codeforces.com/problemset/problem/1102/A
#   15/01/2019
#   Nilton G. M. Junior

# TODO: Prove the following
'''
HYPOTHESIS:

a.  The largest possible difference attainable is 1.

b.  If n is even and is of the form 4*k (k being an integer), then the minimun difference is 0.

c.  If n is even and is NOT of the form 4*k (k being an integer), then the minimun difference is 1.

d.  If n is of the form 4*k + 1 (k being an integer), then the minimun difference is 1.

e.  Otherwise, the minimun difference is 0.
'''

if __name__ == '__main__':
    n = int(input())
    if n % 2 == 0:
        if n % 4 == 0:
            print(0)
        else:
            print(1)
    else:
        if (n - 1) % 4 == 0:
            print(1)
        else:
            print(0)