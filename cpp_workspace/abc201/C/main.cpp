#include <bits/stdc++.h>
using namespace std;

void solve(std::string S){
    unordered_set<int> abs;
    unordered_set<int> pro;
    for(int i = 0; i < 10; i++) {
        if(S.substr(i, 1) == "o") {
            abs.insert(i);
        } else if(S.substr(i, 1) == "?") {
            pro.insert(i);
        }
    }

    int cnt = 0;
    for(int i = 0; i < 10000; i++) {
        unordered_set<int> uoset;
        vector<int> digits{i%10,(i/10)%10, (i/100)%10, (i/1000)};
        for(int digit : digits) {
            uoset.insert(digit);
        }
        for(int digit : pro) {
            auto itr = uoset.find(digit);
            if(itr != uoset.end()) {
                uoset.erase(digit);
            }
        }
        if(uoset == abs) {
            cnt += 1;
        }
    }
    cout << cnt << endl;

}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
