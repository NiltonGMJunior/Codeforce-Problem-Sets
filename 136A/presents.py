#   Codeforces
#   #136A   -   Presents
#   http://codeforces.com/problemset/problem/136/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    n = int(input())
    gift_givers = list(map(int, input().split()))
    gift_receivers = [0] * n
    for index, giver in enumerate(gift_givers):
        gift_receivers[giver - 1] = index + 1
    print(" ".join(map(str, gift_receivers))) 
