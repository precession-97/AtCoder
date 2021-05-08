#include <bits/stdc++.h>
using namespace std;


void solve(long long H, long long W){
    // round up
    long long h = (H + 2 - 1) / 2;
    long long w = (W + 2 - 1) / 2;
    
    if(H == 1) {
        cout << W << endl;
    } else if(W == 1) {
        cout << H << endl;
    } else {
        cout << h * w << endl;
    }
    
}

int main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    solve(H, W);
    return 0;
}
