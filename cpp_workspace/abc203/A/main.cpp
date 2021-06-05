#include <bits/stdc++.h>
using namespace std;


void solve(long long a, long long b, long long c){
    vector<long long> abc = {a, b, c};
    sort(abc.begin(), abc.end());
    if(abc[0] == abc[1]) {
        cout << abc[2] << endl;
    } else if(abc[1] == abc[2]) {
        cout << abc[0] << endl;
    } else {
        cout << 0 << endl;
    }
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
