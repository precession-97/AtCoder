#include <bits/stdc++.h>
using namespace std;


void solve(long long N){
    if((int)((double) N * 1.08) < 206) {
        cout << "Yay!" << endl;
    } else if((int)((double) N * 1.08) == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
}

int main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
