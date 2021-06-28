#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A){
    sort(A.begin(), A.end());
    vector<vector<long long>> vv;
    long long prev = A[0];
    long long c = 1;
    for(int i = 1; i < N; i++) {
        if(A[i] != prev) {
            vv.push_back({A[i-1], c});
            c = 1;
        } else {
            c = c + 1;
        }
        prev = A[i];
    }
    if(c != 1) {
        vv.push_back({A[N-1], c});
    }

    long long cnt = 0;
    for(int i = 0; i < vv.size(); i++) {
        long long sub_cnt = N - vv[i][1];
        cnt = cnt + (sub_cnt * vv[i][1]);
    }

    cout << cnt/2 << endl;
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
