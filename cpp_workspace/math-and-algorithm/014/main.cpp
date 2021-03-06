#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;

/*
* Ex: N = 2020
* return {{2, 2}, {5, 1}, {101, 1}} (expression: 2^2 * 5^1 * 101^1)
*/
vector<pair<long long, long long>> prime_factorize(long long N) {
    vector<pair<long long, long long>> res;
    for(long long p = 2; p * p <= N; p++) {
        if(N % p != 0) continue;
        long long ex = 0; // exponent
        /* Continue to divide until divisible */
        while(N % p == 0) {
            ++ex;
            N /= p;
        }
        res.push_back({p, ex});
    }
    if(N != 1) res.push_back({N, 1});
    return res;
}

void solve(long long N){
    bool insertsSpace = false;
    const vector<pair<long long, long long>> &pf = prime_factorize(N);
    for(pair<long long, long long> p : pf) {
        for(long long ex = 1; ex <= p.second; ++ex) {
            if(insertsSpace) cout << " ";
            insertsSpace = true;
            cout << p.first;
        }
    }
    cout << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;
}
