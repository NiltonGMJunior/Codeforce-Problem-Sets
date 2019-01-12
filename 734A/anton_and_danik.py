#   Codeforces
#   #734A   -  Anton and Danik
#   http://codeforces.com/problemset/problem/734/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    num_games = int(input())
    game_seq = input()
    print("Anton" if game_seq.count("A") > game_seq.count("D") else ("Danik" if game_seq.count("D") > game_seq.count("A") else "Friendship"))
