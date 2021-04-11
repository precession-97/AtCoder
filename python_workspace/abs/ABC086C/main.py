#!/usr/bin/env python3
import sys

YES = "Yes"  # type: str
NO = "No"  # type: str

X = 0
Y = 1

def check(P: "List[int]", t: int, Pt: "List[int]"):
    d = abs(Pt[X] - P[X]) + abs(Pt[Y] - P[Y])
    if t < d:
        return False
    elif (t % 2) == (d % 2):
        return True
    else:
        return False

def solve(N: int, t: "List[int]", x: "List[int]", y: "List[int]"):
    current_pos = [0, 0]
    current_t = 0
    for n in range(N):
        if not check(current_pos, t[n] - current_t, [x[n], y[n]]):
            print(NO)
            break
        else:
            current_pos = [x[n], y[n]]
            current_t = t[n]
    else:
        print(YES)
    return

def main():
    def iterate_tokens():
        for line in sys.stdin:
            for word in line.split():
                yield word
    tokens = iterate_tokens()
    N = int(next(tokens))  # type: int
    t = [int()] * (N)  # type: "List[int]"
    x = [int()] * (N)  # type: "List[int]"
    y = [int()] * (N)  # type: "List[int]"
    for i in range(N):
        t[i] = int(next(tokens))
        x[i] = int(next(tokens))
        y[i] = int(next(tokens))
    solve(N, t, x, y)

if __name__ == '__main__':
    main()
