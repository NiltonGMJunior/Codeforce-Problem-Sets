#   Codeforces
#   #711A   -   Bus to Udayland
#   http://codeforces.com/problemset/problem/711/A
#   13/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    num_rows = int(input())
    output = []
    already_seated = False
    for _ in range(num_rows):
        if already_seated:
            output.append(input())
            continue
        row = input()
        if "OO" in row:
            already_seated = True
            if row.index("OO") == 0:
                output.append("++" + row[2:])
            else:
                output.append(row[:3] + "++")
        else:
            output.append(row)
    if already_seated:
        print("YES")
        for row in output:
            print(row)
    else:
        print("NO")
