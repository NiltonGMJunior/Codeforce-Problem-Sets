#   Codeforces
#   #703A   -   Mishka and Game
#   http://codeforces.com/problemset/problem/703/A
#   13/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    no_rounds = int(input())
    mishka_wins = 0
    draws = 0
    for _ in range(no_rounds):
        dice_roll = list(map(int,input().split()))
        if dice_roll[0] > dice_roll[1]:
            mishka_wins += 1
        else:
            if dice_roll[0] == dice_roll[1]:
                draws += 1
    if mishka_wins > (no_rounds - draws) // 2:
        print("Mishka")
    elif mishka_wins == (no_rounds - draws) / 2:
        print("Friendship is magic!^^")
    else:
        print("Chris")
