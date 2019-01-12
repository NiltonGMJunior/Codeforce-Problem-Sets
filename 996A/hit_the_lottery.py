#   Codeforces
#   #996A   -   Hit the Lottery
#   http://codeforces.com/problemset/problem/996/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    total_ammount = int(input())
    num_bills = 0

    for den in [100, 20, 10, 5, 1]:
        num_bills_den = total_ammount // den
        num_bills += num_bills_den
        total_ammount -= num_bills_den * den
        # The following will break the loop if there is no longer need
        # to continue
        if total_ammount == 0:
            break

    print(num_bills)
