#include <bits/stdc++.h>
using namespace std;

long long sub_solve(long long K, vector<long long> pond) {
    sort(pond.begin(), pond.end());
    int target_idx = K*K - floor(K*K/2) - 1;
    return pond[target_idx];
}

void solve(long long N, long long K, std::vector<std::vector<long long>> A){
    /*
        N       : num of area (N x N)
        K       : size of pond (K x K)
        A[][]   : 
    */
    long long min_med = 1000000001;
    for(int di = 0; di < (N-K+1); di++) {
        for(int dj = 0; dj < (N-K+1); dj++) {
            vector<long long> pond(K*K);
            pair<int, int> up_left = {di, dj};
            pair<int, int> dw_rght = {di + K - 1, dj + K - 1};
            int idx = 0;
            for(int i = up_left.first; i <= dw_rght.first; i++) {
                for(int j = up_left.second; j <= dw_rght.second; j++) {
                    pond[idx] = A[i][j];
                    idx++;
                }
            }
            long long med = sub_solve(K, move(pond));
            min_med = min(min_med, med);
        }
    }
    cout << min_med << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    solve(N, K, std::move(A));
    return 0;
}
