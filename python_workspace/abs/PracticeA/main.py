#!/usr/bin/env python3
import sys


def solve(a: int, b: int, c: int, s: str):
    sum_abc = a + b + c
    print("{} {}".format(sum_abc, s))

def main():
    # generator function
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens() # type: generator
    a = int(next(tokens))  # type: int
    b = int(next(tokens))  # type: int
    c = int(next(tokens))  # type: int
    s = next(tokens)  # type: str
    solve(a, b, c, s)

if __name__ == '__main__':
    main()
