#include <bits/stdc++.h>
using namespace std;


void solve(long long R, long long C, std::vector<std::vector<long long>> A, std::vector<std::vector<long long>> B){

}

// Generated by 2.2.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long R;
    scanf("%lld",&R);
    long long C;
    scanf("%lld",&C);
    std::vector<std::vector<long long>> A(R, std::vector<long long>(C-1));
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C-1 ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    std::vector<std::vector<long long>> B(R-1, std::vector<long long>(C));
    for(int i = 0 ; i < R-1 ; i++){
        for(int j = 0 ; j < C ; j++){
            scanf("%lld",&B[i][j]);
        }
    }
    solve(R, C, std::move(A), std::move(B));
    return 0;
}
