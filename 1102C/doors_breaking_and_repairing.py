#   Codeforces
#   #1102C   -   Doors Breaking and Repairing
#   https://codeforces.com/problemset/problem/1102/C
#   15/01/2019
#   Nilton G. M. Junior

# TODO: Incomplete, working on theory for this problem

if __name__ == "__main__":
    n, x, y = list(map(int, input().split()))
    doors = list(map(int, input().split()))
    
    if x > y:
        print(min([n, 10 ** 100]))
