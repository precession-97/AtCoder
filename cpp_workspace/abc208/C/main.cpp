#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long K, std::vector<pair<long long, long long>> a){
    vector<pair<long long, long long>> tmp_a = a;
    sort(a.begin(), a.end());
    long long less = K / N;
    long long more = K % N;
    
    unordered_set<long long> idx;
    for(int i = 0; i < more; i++) {
        idx.insert(a[i].second);
    }

    for(int i = 0; i < N; i++) {
        auto itr = idx.find(tmp_a[i].second);
        if(itr == idx.end()) {
            cout << less << endl;
        } else {
            cout << less + 1 << endl;
        }
    }

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<pair<long long, long long>> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i].first);
        a[i].second = i;
    }
    solve(N, K, std::move(a));
    return 0;
}
