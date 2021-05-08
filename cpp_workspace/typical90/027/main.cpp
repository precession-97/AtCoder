#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<std::string> S){

    unordered_set<string> registerd_id;
    for(int i = 0; i < N; i++) {
        auto itr = registerd_id.find(S[i]);
        if(itr == registerd_id.end()) {
            cout << i + 1 << endl;
            registerd_id.insert(S[i]);
        }
    }

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
