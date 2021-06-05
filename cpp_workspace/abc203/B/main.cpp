#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long K){
    long long ans = 0;
    long long s_sum = 0;
    for(int j = 1; j <= K; j++) {
        s_sum += j;
    }
    for(int i = 1; i <= N; i++) {
        ans += (i * 100 * K) + s_sum;
    }
    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    solve(N, K);
    return 0;
}
