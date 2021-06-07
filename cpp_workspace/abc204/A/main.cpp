#include <bits/stdc++.h>
using namespace std;


void solve(long long x, long long y){
    /*
    x : fene
    y : arai
    */
    if(x != y) {
        cout << 3 - (x + y) << endl;
    } else {
        cout << x << endl;
    }
}

int main(){
    long long x;
    scanf("%lld",&x);
    long long y;
    scanf("%lld",&y);
    solve(x, y);
    return 0;
}
