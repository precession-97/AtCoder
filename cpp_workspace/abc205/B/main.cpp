#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> A){
    sort(A.begin(), A.end());
    bool ok = true;
    for(int i = 0; i < N; i++) {
        if(A[i] != i+1) {
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
