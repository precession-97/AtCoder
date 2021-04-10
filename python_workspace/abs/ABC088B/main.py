#!/usr/bin/env python3
import sys


def solve(N: int, a: "List[int]"):
    alice_point = 0
    bob_point = 0
    is_continue = True
    while(is_continue):
        if len(a) == 0:
            is_continue = False
            continue
        else:
            alice_get_point = max(a)
            alice_point += alice_get_point
            a.remove(alice_get_point)
        if len(a) == 0:
            is_continue = False
            continue
        else:
            bob_get_point = max(a)
            bob_point += bob_get_point
            a.remove(bob_get_point)
    print(alice_point - bob_point) 
    return


def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    N = int(next(tokens))  # type: int
    a = [int(next(tokens)) for _ in range(N)]  # type: "List[int]"
    solve(N, a)

if __name__ == '__main__':
    main()
