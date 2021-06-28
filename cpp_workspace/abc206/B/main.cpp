#include <bits/stdc++.h>
using namespace std;


void solve(long long N){
    long long ans = 0;
    while(N > 0) {
        ans = ans + 1;
        N = N - ans;
    }
    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
