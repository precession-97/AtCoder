#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> P, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){

}

// Generated by 2.2.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&P[i]);
    }
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(P), std::move(A), std::move(B), std::move(C));
    return 0;
}