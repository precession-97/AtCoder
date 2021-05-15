#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A, long long Q, std::vector<long long> B){
    /*
        N : num class
        A[] : class rate
        Q : num student
        B[] : student rate
    */
    sort(A.begin(), A.end());
    for(int i = 0; i < Q; i++) {
        auto itr = lower_bound(A.begin(), A.end(), B[i]);
        int idx = itr - A.begin();
        if(idx == N) {  // max(A) < B[i] 
            idx = N - 1;    // A[N-1]
        } else if(idx == 0) {   // min(A) > B[i]
            /* idx = 0 */
        } else {    // max(A) >= B[i]
            // A[idx] v.s. A[idx-1]
            long long r_err = abs(A[idx] - B[i]);
            long long l_err = abs(A[idx - 1] - B[i]);
            if(l_err < r_err) {
                idx = idx - 1;
            }
        }
        cout << abs(A[idx] - B[i]) << endl;
    }

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> B(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, std::move(A), Q, std::move(B));
    return 0;
}
