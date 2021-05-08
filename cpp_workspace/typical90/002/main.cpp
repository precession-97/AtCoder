#include <bits/stdc++.h>
using namespace std;

void solve(long long N){
    long long cnt = 0;
    for(int bit = 0; bit < (1 << N); bit++) {
        string str = "";
        for(int i = 0; i < N; i++) {
            if(bit & (1 << i)) {
                str = ")" + str;
            } else {
                str = "(" + str;
            }
        }

        bool is_valid = true;
        int score = 0;
        for(int i = 0; i < N; i++) {
            if(str.substr(i, 1) == "(") {
                score += 1;
            } else {
                score += -1;
            }
            if(score < 0) {
                is_valid = false;
                break;
            } else if(score > 0) {
                is_valid = false;
            } else {
                is_valid = true;
            }
        }

        if(is_valid) {
            cnt += 1;
            cout << str << endl;
        }
    }
    if(cnt == 0) {
        cout << endl;
    }
}

int main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
