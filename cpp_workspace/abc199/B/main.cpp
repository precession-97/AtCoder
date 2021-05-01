#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A, std::vector<long long> B){
    
    int a_max = *(max_element(A.begin(), A.end()));
    int b_min = *(min_element(B.begin(), B.end()));

    cout << max(0, (b_min - a_max + 1)) << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
