#include <bits/stdc++.h>
using namespace std;


void solve(long long A, long long B, long long C, long long D){
    long long water = A + B;
    long long red = C;
    long long cnt = 1;
    double rate = (double)water / (double)red;
    while(rate > (double)D) {
        water += B;
        red += C;
        if(rate <= ((double)water / (double)red)) {
            cnt = -1;
            break;
        }
        cnt++;
        rate = ((double)water / (double)red);
    }
    cout << cnt << endl;

}

int main(){
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    long long D;
    scanf("%lld",&D);
    solve(A, B, C, D);
    return 0;
}
