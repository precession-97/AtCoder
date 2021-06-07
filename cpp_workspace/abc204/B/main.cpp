#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A){
    long long ans = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] > 10) {
            ans += (A[i] - 10);
        }
    }
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
