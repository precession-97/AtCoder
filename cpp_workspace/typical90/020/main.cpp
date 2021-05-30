#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long a, long long b, long long c){
    /*
        log2(a) < b*log2(c) ?
    */

    // Not recommend (calc by float type on pow function)
    // long long bLog2c = pow(c, b);

    // alt pow function
    long long bLog2c = 1;
    for(int _ = 0; _ < b; _++) {
        bLog2c *= c;
    }

    if(a < bLog2c) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
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
