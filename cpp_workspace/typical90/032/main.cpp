#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<std::vector<long long>> A, long long M, std::vector<long long> X, std::vector<long long> Y){
    /*
        N       : num of runner
        A[i][j] : i th runner time of j area
        M       : num of rumor
        X[]     : NG pair
        Y[]     : NG pair
    */
    vector<int> idxv(N);
    for(int idx = 0; idx < N; idx++) {
        idxv[idx] = idx;
    }
    vector<vector<bool>> is_NG(N, vector<bool>(N, false));
    long long min_time = 1000 * (N + 1);
    for(int n = 0; n < N; n++) {
        for(int o = 0; o < N; o++) {
            cout << is_NG[n][o] << " ";
        }
        cout << endl;
    }
    // do {

    // } while(next_permutation(idxv.begin(), idxv.end()));
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    long long M;
    scanf("%lld",&M);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
    }
    solve(N, std::move(A), M, std::move(X), std::move(Y));
    return 0;
}
