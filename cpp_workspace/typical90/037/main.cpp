#include <bits/stdc++.h>
using namespace std;


void solve(long long W, long long N, std::vector<long long> L, std::vector<long long> R, std::vector<long long> V){

}

// Generated by 2.2.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long W;
    scanf("%lld",&W);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> L(N);
    std::vector<long long> R(N);
    std::vector<long long> V(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
        scanf("%lld",&V[i]);
    }
    solve(W, N, std::move(L), std::move(R), std::move(V));
    return 0;
}
