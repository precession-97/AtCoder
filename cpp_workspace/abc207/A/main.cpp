#include <bits/stdc++.h>
using namespace std;


void solve(long long A, long long B, long long C){
    vector<long long> v = {A, B, C};
    sort(v.begin(), v.end());
    cout << v[1] + v[2] << endl;
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
