# AC by PyPy3
# TLE by Python3

import sys

INT_MAX = 1 << 30

def solve(N: int, A: "List[int]"):
    _min = INT_MAX
    # Loop : case of separating sequence
    for i in range(1 << N):
        _or = 0
        _xor = 0
        # Loop : number of element in sequence
        for j in range(N):
            _or |= A[j]
            if(i & (1 << j)):   # separate or not
                _xor ^= _or
                _or = 0
        _xor ^= _or
        _min = min(_min, _xor)
    print(_min)
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
