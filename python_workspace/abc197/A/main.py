#!/usr/bin/env python3
import sys

def solve(S: str):
    s_tmp = S[1:] + S[0]
    print(s_tmp)
    return

def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    S = next(tokens)  # type: str
    solve(S)

if __name__ == '__main__':
    main()
