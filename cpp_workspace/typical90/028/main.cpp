#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> lx, std::vector<long long> ly, std::vector<long long> rx, std::vector<long long> ry){

}

// Generated by 2.2.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> lx(N);
    std::vector<long long> ly(N);
    std::vector<long long> rx(N);
    std::vector<long long> ry(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&lx[i]);
        scanf("%lld",&ly[i]);
        scanf("%lld",&rx[i]);
        scanf("%lld",&ry[i]);
    }
    solve(N, std::move(lx), std::move(ly), std::move(rx), std::move(ry));
    return 0;
}