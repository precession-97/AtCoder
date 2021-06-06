#include <bits/stdc++.h>
using namespace std;

void solve(long long N, long long K, std::vector<std::vector<long long>> A){
    /*
        N       : num of area (N x N)
        K       : size of pond (K x K)
        A[][]   : 
    */
    vector<vector<long long>> prefix_sum_2d(N+1, vector<long long>(N+1, 0));

    /* bin search */
    int ok = 100000000;
    int ng = -1;
    int lim = ((K*K)/2) + 1
    while(ng + 1 < ok) {
        long long med = (ok + ng) / 2;
        /* make array of prefix sum*/
        for(int h = 0; h < N; h++) {
            for(int w = 0; w < N; w++) {
                prefix_sum_2d[h+1][w+1] = prefix_sum_2d[h][w+1] + prefix_sum_2d[h+1][w] - prefix_sum_2d[h][w];
                if(A[h][w] >= med) {
                    prefix_sum_2d[h+1][w+1] = prefix_sum_2d[h+1][w+1] + 1;
                }
            }
        }
        bool is_exist = false;
        for(int kh = 0; kh < N-K+1; kh++) {
            for(int kw = 0; kw < N-K+1; kw++) {
                int cnt = prefix_sum_2d[kh+K][kw+K] - prefix_sum_2d[kh+K][kw] - prefix_sum_2d[kh][kw+K] + prefix_sum_2d[kh][kw];
                if(cnt >= lim) {
                    is_exist = true;
                    break;
                }
            }
        }
        if(is_exist) {
            ng = med;
        } else {
            ok = med;
        }
    }
    cout << ok << endl;
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
