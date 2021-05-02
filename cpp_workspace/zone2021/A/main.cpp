#include <bits/stdc++.h>
using namespace std;


void solve(std::string S){
    std::string sub = "ZONe";
    size_t len = S.length();
    int count = 0;
    for(int idx = 0; idx < len; ++count) {
        int ret = S.find(sub, idx);
        if(ret == std::string::npos)
            break;
        idx = ret + 1;
    }
    cout << count << endl;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
