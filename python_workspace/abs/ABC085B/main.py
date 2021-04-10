#!/usr/bin/env python3
import sys


def solve(N: int, d: "List[int]"):
    cnt = 0
    is_continue = True
    current_d = 1000
    while(is_continue):
        if len(d) == 0:
            is_continue = False
        elif max(d) >= current_d:
            d.remove(max(d))
        else:
            current_d = max(d)
            cnt += 1
            d.remove(max(d))
    print(cnt)

    return


def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    N = int(next(tokens))  # type: int
    d = [int(next(tokens)) for _ in range(N)]  # type: "List[int]"
    solve(N, d)

if __name__ == '__main__':
    main()
