#   Codeforces
#   #705A   -   Hulk
#   http://codeforces.com/problemset/problem/705/A
#   11/01/2019
#   Nilton G. M. Junior


def get_emotion(layers):
    if layers == 1:
        return "I hate"
    elif layers % 2 == 0:
        return get_emotion(layers - 1) + " that I love"
    else:
        return get_emotion(layers - 1) + " that I hate"


if __name__ == '__main__':
    layers = int(input())
    print(get_emotion(layers) + " it")
