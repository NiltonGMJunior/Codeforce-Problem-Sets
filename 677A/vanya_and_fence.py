#   Codeforces
#   #677A   -  Vanya and Fence
#   http://codeforces.com/problemset/problem/677/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    num_friends, height_fence = list(map(int, input().split()))
    height_friends = list(map(int, input().split()))
    count_shorter = len(list(filter(lambda h: h <= height_fence, height_friends)))
    count_taller = num_friends - count_shorter
    print(count_shorter + 2 * count_taller)
