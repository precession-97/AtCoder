#include <bits/stdc++.h>
using namespace std;

void solve(long long N, vector<vector<long long>> vv) {
    
}

int main(){
    long long N;
    scanf("%lld",&N);
    vector<vector<long long>> vv(N, vector<long long>(3));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%lld", &vv[i][j]);
        }
    }
    solve(N, move(vv));
    return 0;
}
