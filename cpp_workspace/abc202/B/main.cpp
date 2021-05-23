#include <bits/stdc++.h>
using namespace std;


void solve(std::string S){
    string ans = "";
    string S_inv(S.rbegin(), S.rend());
    for(char s : S_inv) {
        if(s == '6') {
            ans += '9';
        } else if(s == '9') {
            ans += '6';
        } else {
            ans += s;
        }
    }
    cout << ans << endl;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
