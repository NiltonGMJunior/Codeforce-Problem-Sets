#   Codeforces
#   #749A   -   Bachgold Problem
#   http://codeforces.com/problemset/problem/749/A
#   13/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    n = int(input())

    if n % 2 == 0:
        twos_count = n // 2
        threes_count = 0
    else:
        twos_count = (n - 3) // 2
        threes_count = 1

    print(twos_count + threes_count)
    print(" ".join(["2"]*twos_count + ["3"]*threes_count))

    # The following works but is dumb
    # prime_count = 0
    # primes = []
    # while n > 0:
    #     prime_count += 1
    #     if n - 2 != 1:
    #         n -= 2
    #         primes.append(2)
    #     else:
    #         n -= 3
    #         primes.append(3)
    # print(prime_count)
    # print(' '.join(map(str, primes)))
