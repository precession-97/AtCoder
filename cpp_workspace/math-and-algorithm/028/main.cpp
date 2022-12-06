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


void solve(long long N, std::vector<long long> h){

    vector<long long> dp(N + 1);

    // initialize dp
    for(int n = 1; n <= N; n++) {
        dp[n] = 1LL << 60;
    }

    // initial condition
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);

    // update dp
    for(int j = 3; j <= N; j++) {
        dp[j] = min(
            dp[j - 1] + abs(h[j] - h[j - 1]),
            dp[j - 2] + abs(h[j] - h[j - 2])
        );
    }

    cout << dp[N] << endl;

}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> h(N + 1);
    for(int i = 1 ; i <= N ; i++){
        std::scanf("%lld", &h[i]);
    }
    solve(N, std::move(h));
    return 0;
}
