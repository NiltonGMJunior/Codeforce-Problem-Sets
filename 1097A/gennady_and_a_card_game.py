#   Codeforces
#   #1097A   -   Gennady and a Card Game
#   http://codeforces.com/problemset/problem/1097/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    table_card = input()
    hand_cards = input().split()

    target_rank = table_card[0]
    target_suit = table_card[1]

    available_ranks = list(set(map(lambda x: x[0], hand_cards)))
    available_suits = list(set(map(lambda x: x[1], hand_cards)))

    if (target_rank in available_ranks) or (target_suit in available_suits):
        print("YES")
    else:
        print("NO")
