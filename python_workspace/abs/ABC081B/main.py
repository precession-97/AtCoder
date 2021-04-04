#!/usr/bin/env python3
import sys

MOD = 2  # type: int


def solve(N: int, A: "List[int]"):
    cnt = 0
    is_continue = True
    while(is_continue):
        for a in A:
            if a % MOD != 0:
                is_continue = False
                break
        else:
            cnt += 1
            A = list(map(lambda a: a//2, A))
    print(cnt)

def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    N = int(next(tokens))  # type: int
    A = [int(next(tokens)) for _ in range(N)]  # type: "List[int]"
    solve(N, A)

if __name__ == '__main__':
    main()
