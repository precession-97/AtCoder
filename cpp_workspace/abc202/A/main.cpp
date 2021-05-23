#include <bits/stdc++.h>
using namespace std;


void solve(long long a, long long b, long long c){
    long long a_inv = 7 - a;
    long long b_inv = 7 - b;
    long long c_inv = 7 - c;
    cout << a_inv + b_inv + c_inv << endl;
}

int main(){
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long c;
    scanf("%lld",&c);
    solve(a, b, c);
    return 0;
}
