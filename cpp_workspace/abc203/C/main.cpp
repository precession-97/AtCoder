#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long K, std::vector<pair<long long, long long>> friends){
    /*
        N   : num of friend
        K   : init money
        A[i]: ith friend pos
        B[i]: value of present
    */
    long long max_idx = K;
    sort(friends.begin(), friends.end());
    for(int i = 0; i < N; i++) {
        if(friends[i].first <= max_idx) {
            max_idx += friends[i].second;
        } else {
            break;
        }
    }
    cout << max_idx << endl;

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    vector<pair<long long, long long>> friends(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&friends[i].first);
        scanf("%lld",&friends[i].second);
    }
    solve(N, K, std::move(friends));
    return 0;
}
