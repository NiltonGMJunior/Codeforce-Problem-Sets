#   Codeforces
#   #200B   -  Drinks
#   http://codeforces.com/problemset/problem/200/B
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    num_drinks = int(input())
    oj_content = list(map(int, input().split()))
    print(sum(oj_content) / num_drinks)
