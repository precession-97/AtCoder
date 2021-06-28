#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A){
    
    long long ans = N * (N - 1) / 2;

    sort(A.begin(), A.end());

    long long same_cnt = 1;
    long long buf = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] == buf) {
            same_cnt++;
        } else {
            ans -= same_cnt * (same_cnt - 1) / 2;
            same_cnt = 1;
            buf = A[i];
        }
    }
    ans -= same_cnt * (same_cnt - 1) / 2;

    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
