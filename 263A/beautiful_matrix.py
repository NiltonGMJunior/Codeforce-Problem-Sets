#   Codeforces
#   #867A   -   Beautiful Matrix
#   http://codeforces.com/problemset/problem/263/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    mat = []
    for row in range(5):
        mat.append(list(map(int, input().split())))
        if 1 in mat[-1]:
            one_row = len(mat)             # Indexing from 1!
            one_col = mat[-1].index(1) + 1 # Indexing from 1!
    num_moves = abs(3 - one_row) + abs(3 - one_col)
    print(num_moves)
