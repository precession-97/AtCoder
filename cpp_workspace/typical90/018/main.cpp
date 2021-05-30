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
    // angular velocity
    double omg = 2 * PI / (double)T;
    
    for(int i = 0; i < Q; i++) {
        // ferris wheel pos at Q_i
        double x = 0.0;
        double y = -((double)L/2) * sin(omg * (double)E[i]);
        double z = -((double)L/2) * cos(omg * (double)E[i]) + ((double)L/2);
        // calc distance
        double d_d = pow((x - (double)X), 2.0) + pow((y - (double)Y), 2.0) + pow(z, 2.0);
        double d_u = pow((x - (double)X), 2.0) + pow((y - (double)Y), 2.0);
        // calc radian
        double rad = acos(sqrt(d_u/d_d));
        // radian -> arc degree
        cout << setprecision(10) << rad * (180 / PI) << endl;
    }
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
