#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> D, std::vector<long long> C, std::vector<long long> S){

}

// Generated by 2.2.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> D(N);
    std::vector<long long> C(N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&D[i]);
        scanf("%lld",&C[i]);
        scanf("%lld",&S[i]);
    }
    solve(N, std::move(D), std::move(C), std::move(S));
    return 0;
}
