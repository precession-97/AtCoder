#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long K){
    for(int i = 0; i < K; i++) {
        if(N % 200 == 0) {
            N = N / 200;
        } else {
            N = (N * 1000) + 200;
        }
    }
    cout << N << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    solve(N, K);
    return 0;
}
