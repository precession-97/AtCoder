#!/usr/bin/env python3
import sys

INT_MAX = 10000

def solve(N: int, A: "List[int]"):
    minimum = INT_MAX
    for idx in range(1, N, 1):
        left = A[0]
        for a in A[:idx]:
            left = left | a
        right = A[idx]
        for a in A[idx:]:
            right = right | a
        xor = left ^ right
        if xor <= minimum:
            minimum = xor
    print(minimum)
    return

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
