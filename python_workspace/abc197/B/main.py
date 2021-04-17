#!/usr/bin/env python3
import sys

def solve(H, W, X, Y, field):
    # [1, H] -> [0, (H-1)]
    X = X - 1
    Y = Y - 1

    cnt = 1
    # Down
    for x in range(X + 1, H, 1):
        if field[x][Y] == ".":
            cnt += 1
        else:
            break
    # Up
    for x in range(X - 1, -1, -1):
        if field[x][Y] == ".":
            cnt += 1
        else:
            break
    # Right
    for y in range(Y + 1, W, 1):
        if field[X][y] == ".":
            cnt += 1
        else:
            break
    # Left
    for y in range(Y - 1, -1, -1):
        if field[X][y] == ".":
            cnt += 1
        else:
            break
    print(cnt)

def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    H = int(next(tokens))
    W = int(next(tokens))
    X = int(next(tokens))
    Y = int(next(tokens))
    field = []
    for _ in range(H):
        field.append(next(tokens))
    solve(H, W, X, Y, field)

if __name__ == '__main__':
    main()
