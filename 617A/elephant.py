#   Codeforces
#   #617A   -   Elephant
#   http://codeforces.com/problemset/problem/617/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    position = int(input())
    if position <= 5:
        print(1)
    else:
        print(position // 5 + (1 if position % 5 != 0 else 0))
