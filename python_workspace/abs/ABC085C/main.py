#!/usr/bin/env python3
import sys


def solve(N: int, Y: int):
    for hukuzawa in range(N + 1):
        for higuchi in range(N - hukuzawa + 1):
            noguchi = N - (hukuzawa + higuchi)
            total = 10000 * hukuzawa + 5000 * higuchi + 1000 * noguchi
            if total > Y:
                break
            elif total == Y:
                print(hukuzawa, higuchi, noguchi)
                return
    print(-1, -1, -1)
    return


def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    N = int(next(tokens))  # type: int
    Y = int(next(tokens))  # type: int
    solve(N, Y)

if __name__ == '__main__':
    main()
