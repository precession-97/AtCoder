#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A, std::vector<long long> B){
    /*
        N : num student, school
        A[] : position of student
        B[] : position of school
    */
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    long long inconv = 0;
    for(int i = 0; i < N; i++) {
        inconv += abs(A[i] - B[i]);
    }
    cout << inconv << endl;

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
