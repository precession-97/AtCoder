#include <bits/stdc++.h>
using namespace std;


void solve(long long A, long long B, long long C){
    /*
        A^C v.s. B^C
    */
    if(C % 2 == 0) {
        if(abs(A) > abs(B)) {
            cout << ">" << endl;
        } else if(abs(A) == abs(B)) {
            cout << "=" << endl;
        } else {
            cout << "<" << endl;
        }
    } else {
        if(A < B) {
            cout << "<" << endl;
        } else if (A == B) {
            cout << "=" << endl;
        } else {
            cout << ">" << endl;
        }
    }
}

int main(){
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    solve(A, B, C);
    return 0;
}
