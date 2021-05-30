#include <bits/stdc++.h>
using namespace std;

const double PI = M_PI;

void solve(long long T, long long L, long long X, long long Y, long long Q, std::vector<long long> E){
    /*
        T : time of the cycle
        L : height
        X : coordinate of the statue
        Y : coordinate of the statue
        Q : num of question
        E[] : how long minute left
    */

    /*
        angular velocity
        omg = 2 * PI / T
        ferris wheel
        x = 0
        y = - (L/2) * sin(omg * t)
        z = (L/2) * cos(omg * (t - (2/T))) + (L/2)
    */
}

int main(){
    long long T;
    scanf("%lld",&T);
    long long L;
    scanf("%lld",&L);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> E(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&E[i]);
    }
    solve(T, L, X, Y, Q, std::move(E));
    return 0;
}
