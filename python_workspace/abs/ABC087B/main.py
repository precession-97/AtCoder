#!/usr/bin/env python3
import sys


def solve(A: int, B: int, C: int, X: int):
    cnt = 0
    for a in range(A + 1):
        total = 500 * a
        if total > X:
            break
        else:
            for b in range(B + 1):
                total = 500 * a + 100 * b
                if total > X:
                    break
                else:
                    for c in range(C + 1):
                        total = 500 * a + 100 * b + 50 * c
                        if total == X:
                            cnt += 1
                            break
                        elif total > X:
                            break
                        else:
                            continue
    print(cnt)

def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    A = int(next(tokens))  # type: int
    B = int(next(tokens))  # type: int
    C = int(next(tokens))  # type: int
    X = int(next(tokens))  # type: int
    solve(A, B, C, X)

if __name__ == '__main__':
    main()
