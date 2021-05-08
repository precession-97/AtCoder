#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A){
    long long cnt = 0;
    vector<vector<long long>> surplus(200);
    for(int i = 0; i < N; i++) {
        int spls = A[i] % 200;
        surplus[spls].push_back(A[i]);
    }
    
    for(int spls = 0; spls < surplus.size(); spls++) {
        int element_num = surplus[spls].size();
        if(element_num >= 2) {
            for(int sub_cnt = 1; sub_cnt <= (element_num - 1); sub_cnt++) {
                cnt += sub_cnt;
            }
        }
    }
    cout << cnt << endl;
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
