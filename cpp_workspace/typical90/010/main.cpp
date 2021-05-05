#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> C, std::vector<long long> P, long long Q, std::vector<long long> L, std::vector<long long> R){
    
    vector<long long>accum_c1(N);
    vector<long long>accum_c2(N);

    for(int i = 0; i < N; i++) {
        long long p1 = 0;
        long long p2 = 0;
        if(C[i] == 1) {
            p1 = P[i];
        } else {
            p2 = P[i];
        }
        if(i != 0) {
            accum_c1[i] = accum_c1[i-1] + p1;
            accum_c2[i] = accum_c2[i-1] + p2;
        } else {
            accum_c1[i] = p1;
            accum_c2[i] = p2;
        }
    }
    
    for(int i = 0; i < Q; i++) {
        long long sm_c1 = 0;
        long long sm_c2 = 0;
        if((L[i] - 1) == 0) {
            sm_c1 = accum_c1[R[i] - 1];
            sm_c2 = accum_c2[R[i] - 1];
        } else {
            sm_c1 = accum_c1[R[i] - 1] - accum_c1[L[i] - 2];
            sm_c2 = accum_c2[R[i] - 1] - accum_c2[L[i] - 2];
        }

        cout << sm_c1 << " " << sm_c2 << endl;
    }
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> C(N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
        scanf("%lld",&P[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
    }
    solve(N, std::move(C), std::move(P), Q, std::move(L), std::move(R));
    return 0;
}
