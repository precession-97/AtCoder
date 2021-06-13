#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long Q, std::vector<long long> A, std::vector<long long> K){
    vector<int> seq(N);
    int s = 0;
    int e = 0;
    for(int i = 1; i < N; i++) {
        if(A[i] == A[i-1] + 1) {
            e = i;
        } else {
            for(int j = s; j <= e; j++) {
                seq[j] = (e - s) + 1;
            }
            s = e;
        }
    }
    for(int i = 0; i < N; i++) {
        cout << seq[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < Q; i++) {
        auto itr = upper_bound(A.begin(), A.end(), K[i]) - A.begin();
        cout << itr << endl;
    }
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> K(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&K[i]);
    }
    solve(N, Q, std::move(A), std::move(K));
    return 0;
}
