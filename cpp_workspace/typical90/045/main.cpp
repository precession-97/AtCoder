#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long K, std::vector<long long> X, std::vector<long long> Y){

}

// Generated by 2.2.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
    }
    solve(N, K, std::move(X), std::move(Y));
    return 0;
}
