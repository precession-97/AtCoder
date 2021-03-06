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

template<class T> inline bool chmax(T& a, T b);

void solve(long long N, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c){
    // A, B, C
    const int KIND_ACTION = 3;
    // DP table
    long long dp[N][KIND_ACTION];
    // dp init
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < KIND_ACTION; j++) {
            dp[i][j] = 0;
        }
    }
    // initial condition
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    vector<vector<long long>> happiness = {a, b, c};

    for(int i = 1; i < N; i++) {
        // j : selected action-idx on N_i
        for(int j = 0; j < KIND_ACTION; j++) {
            // k : selected action-idx on N_(i-1)
            for(int k = 0; k < KIND_ACTION; k++) {
                if(j != k) {
                    chmax(dp[i][j], dp[i-1][k] + happiness[j][i]);
                }
            }
        }
    }
    
    cout << max({dp[N-1][0], dp[N-1][1], dp[N-1][2]}) << endl;

}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
        std::scanf("%lld", &c[i]);
    }
    solve(N, std::move(a), std::move(b), std::move(c));
    return 0;
}

template<class T> inline bool chmax(T& a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}
