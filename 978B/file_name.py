#   Codeforces
#   #978B   -   File Name
#   https://codeforces.com/problemset/problem/978/B
#   01/06/2019
#   Nilton G. M. Junior

if __name__ == '__main__':
    n = int(input())
    file_name = input()
    streak = 0
    removed = 0
    for i in range(n):
        if file_name[i] == 'x':
            if streak == 2:
                removed += 1
            else:
                streak += 1
        else:
            streak = 0
    
    print(removed)
