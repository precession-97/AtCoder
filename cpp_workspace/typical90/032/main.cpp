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
    for(int i = 0; i < M; i++) {
        is_NG[X[i]-1][Y[i]-1] = true;
        is_NG[Y[i]-1][X[i]-1] = true;
    }

    long long min_time = 1000 * (N + 1);
    do {
        long long time = A[idxv[0]][0];
        bool ok = true;
        for(int i = 1; i < N; i++) {
            if(is_NG[idxv[i]][idxv[i-1]]) {
                ok = false;
                break;
            }
            time += A[idxv[i]][i];
        }
        if(ok) {
            min_time = min(time, min_time);
        }
    } while(next_permutation(idxv.begin(), idxv.end()));
    
    if(min_time == 1000*(N+1)) {
        cout << -1 << endl;
    } else {
        cout << min_time << endl;
    }

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
