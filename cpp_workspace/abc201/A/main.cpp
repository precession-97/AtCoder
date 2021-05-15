#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::vector<long long> A){
    sort(A.begin(), A.end());
    if(A[0] - A[1] == A[1] - A[2]) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }
}

int main(){
    std::vector<long long> A(3);
    for(int i = 0 ; i < 3 ; i++){
        scanf("%lld",&A[i]);
    }
    solve(std::move(A));
    return 0;
}
