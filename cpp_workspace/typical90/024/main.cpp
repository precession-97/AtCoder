#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> B){

    long long err = 0;
    for(int i = 0; i < N; i++) {
        err += abs(B[i] - A[i]);
    }
    long long diff = K - err;
    if(diff < 0 || diff % 2 == 1) {
        cout << NO << endl;
    } else {
        cout << YES << endl;
    }

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, K, std::move(A), std::move(B));
    return 0;
}
