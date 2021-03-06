#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;


void solve(long long N, std::vector<long long> B, std::vector<long long> R){
    double e_b = 0.0;
    double e_r = 0.0;
    for(long long n = 0; n < N; n++) {
        e_b += (double)B[n];
        e_r += (double)R[n];
    }
    e_b = e_b / (double)N;
    e_r = e_r / (double)N;

    cout << fixed << setprecision(10);
    cout << e_b + e_r << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &B[i]);
    }
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &R[i]);
    }
    solve(N, std::move(B), std::move(R));
    return 0;
}
