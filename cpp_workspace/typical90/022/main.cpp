#include <bits/stdc++.h>
using namespace std;


void solve(long long A, long long B, long long C){

    long long gcd = __gcd(__gcd(A, B), C);
    long long ans = (A / gcd) + (B / gcd) + (C / gcd) - 3;
    cout << ans << endl;

}

int main(){
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    solve(A, B, C);
    return 0;
}
