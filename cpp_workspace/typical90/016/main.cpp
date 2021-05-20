#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long A, long long B, long long C){
    /*
        N : payment
        A : yen
        B : yen
        C : yen
    */
    int MAX = 9999;
    int ans = MAX;
    for(int a = 0; (a <= MAX) && (A*a <= N); a++) {
        for(int b = 0; (a + b <= MAX) && (A*a + B*b <= N); b++) {
            if((N - A*a - B*b) % C == 0) {
                int c = (N - A*a - B*b) / C;
                ans = min(ans, a + b + c);
            }
        }
    }
    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    solve(N, A, B, C);
    return 0;
}
