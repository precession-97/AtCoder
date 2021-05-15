#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<std::string> S, std::vector<long long> T){
    /*
        N : number mountain
        S[] : name mountain
        T[] : height mountain
    */
    vector<pair<long long, string>> pairs(N);
    for(int i = 0; i < N; i++) {
        pairs[i] = make_pair(T[i], S[i]);
    }
    sort(pairs.begin(), pairs.end());
    cout << pairs[N - 2].second << endl;

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    std::vector<long long> T(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
        scanf("%lld",&T[i]);
    }
    solve(N, std::move(S), std::move(T));
    return 0;
}
