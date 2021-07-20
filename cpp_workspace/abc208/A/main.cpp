#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long A, long long B){
    if(B < A || A*6 < B) {
        cout << NO << endl;
    } else {
        cout << YES << endl;
    }
}

int main(){
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
