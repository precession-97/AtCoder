#include <bits/stdc++.h>
using namespace std;


void solve(long long H, long long W, std::vector<std::vector<long long>> A){
    vector<long long> sum_h(H);
    for(int h = 0; h < H; h++) {
        long long sm_h = 0;
        for(int w = 0; w < W; w++) {
            sm_h += A[h][w];
        }
        sum_h[h] = sm_h;
    }
    
    vector<long long> sum_w(W);
    for(int w = 0; w < W; w++) {
        long long sm_w = 0;
        for(int h = 0; h < H; h++) {
            sm_w += A[h][w];
        }
        sum_w[w] = sm_w;
    }

    vector<vector<long long>> B(H, vector<long long>(W));
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            B[h][w] = sum_h[h] + sum_w[w] - A[h][w];
            if(w != W-1) {
                cout << B[h][w] << " ";
            } else {
                cout << B[h][w] << endl;
            }
        }
    }

}

int main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    solve(H, W, std::move(A));
    return 0;
}
