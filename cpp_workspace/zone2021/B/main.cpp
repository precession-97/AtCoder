#include <bits/stdc++.h>
using namespace std;

double MIN_B = 0.0;

void solve(long long N, long long D, long long H, std::vector<long long> d, std::vector<long long> h){
    double min_b = MIN_B;
    for(int i = 0; i < d.size(); i++) {
        double a = (double(H) - double(h[i])) / (double(D) - double(d[i]));
        double b = double(H) - (a * double(D));
        min_b = max(min_b, b);
    }
    cout << min_b << endl;
    
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    long long H;
    scanf("%lld",&H);
    std::vector<long long> d(N);
    std::vector<long long> h(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&d[i]);
        scanf("%lld",&h[i]);
    }
    solve(N, D, H, std::move(d), std::move(h));
    return 0;
}
