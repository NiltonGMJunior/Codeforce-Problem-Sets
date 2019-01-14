#   Codeforces
#   #1101B   -   Accordion
#   http://codeforces.com/problemset/problem/1101/B
#   13/01/2019
#   Nilton G. M. Junior

# TODO: (SOLVED)    Regex isn't working for case with no pipes: [::], where 4 should be returned instead of -1.
# TODO: (SOLVED)    Regex failed input [hellocodeforces::], returning -1 when answer is 4
# TODO: (PENDING)   Time limid exceeded on test 67, composed of a really long sequence of "[" characters

import re

if __name__ == '__main__':

    s = input()

    bracket_pattern = re.compile(r'\[.+\]')
    colon_pattern = re.compile(r'\:.+\:|\:\:')

    bracket_matches = bracket_pattern.finditer(s)

    max_length = 0

    for bracket_match in bracket_matches:
        colon_matches = colon_pattern.finditer(bracket_match.group(0)[1:-1])
        for colon_match in colon_matches:
            pipe_count = colon_match.group(0).count("|")
            if pipe_count + 4 > max_length:
                max_length = pipe_count + 4

    # Improvised solution for the case [::], this should be modified when regex is fixed
    # print(max_length if max_length != 0 else (-1 if "[::]" not in s else 4))

    print(max_length if max_length != 0 else -1)
