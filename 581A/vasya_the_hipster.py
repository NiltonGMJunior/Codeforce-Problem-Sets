#   Codeforces
#   #581A   -  Vasya the Hipster
#   http://codeforces.com/problemset/problem/581/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    red_socks, blue_socks = list(map(int, input().split()))
    if red_socks >= blue_socks:
        days_alternate_socks = blue_socks
        red_socks -= days_alternate_socks
        blue_socks -= days_alternate_socks
        days_matching_socks = red_socks // 2
    else:
        days_alternate_socks = red_socks
        red_socks -= days_alternate_socks
        blue_socks -= days_alternate_socks
        days_matching_socks = blue_socks // 2
    print(days_alternate_socks, days_matching_socks)
