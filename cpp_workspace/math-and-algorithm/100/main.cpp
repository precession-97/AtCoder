#include <iostream>
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


void solve(long long Q, std::vector<long double> X, std::vector<long double> Y, std::vector<long double> Z, std::vector<long long> T){

}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long double> X(Q);
    std::vector<long double> Y(Q);
    std::vector<long double> Z(Q);
    std::vector<long long> T(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%Lf", &X[i]);
        std::scanf("%Lf", &Y[i]);
        std::scanf("%Lf", &Z[i]);
        std::scanf("%lld", &T[i]);
    }
    solve(Q, std::move(X), std::move(Y), std::move(Z), std::move(T));
    return 0;
}
