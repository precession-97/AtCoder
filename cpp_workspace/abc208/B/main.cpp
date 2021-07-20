#include <bits/stdc++.h>
using namespace std;


void solve(long long P){
    vector<vector<long long>> vv(10, vector<long long>(2));
    vv[0][0] = 1;
    vv[0][1] = 100;
    for(int i = 1; i < 10; i++) {
        vv[i][0] = vv[i-1][0] * (i+1);
        vv[i][1] = 100;
    }
    long long ans = 0;
    for(int i = vv.size()-1; i >= 0; i--) {
        while(P >= vv[i][0] && vv[i][1] > 0) {
            P -= vv[i][0];
            vv[i][1]--;
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    long long P;
    scanf("%lld",&P);
    solve(P);
    return 0;
}
