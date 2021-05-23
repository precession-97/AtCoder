#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){
    
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    
    vector<pair<int, int>> p_a;
    long long b_a_num = 0;
    int cnt = 1;
    for(int i = 0; i < N; i++) {
        long long a = A[i];
        if(a == b_a_num) {
            cnt++;
        } else if(b_a_num != 0) {
            p_a.push_back(make_pair(b_a_num, cnt));
            cnt = 1;
        }
        if(i == (N - 1)) {
            p_a.push_back(make_pair(a, cnt));
        }
        b_a_num = a;
    }

    vector<pair<int, int>> p_b;
    long long b_b_num = 0;
    cnt = 1;
    for(int i = 0; i < N; i++) {
        long long b = B[C[i] - 1];
        if(b == b_b_num) {
            cnt++;
        } else if(b_b_num != 0) {
            p_b.push_back(make_pair(b_b_num, cnt));
            cnt = 1;
        }
        if(i == (N - 1)) {
            p_b.push_back(make_pair(b, cnt));
        }
        b_b_num = b;
    }

    sort(p_b.begin(), p_b.end());

    long long ans = 0;
    for(pair<int, int> pa : p_a) {
        for(pair<int, int> pb : p_b) {
            if(pa.first == pb.first) {
                ans += (long long)(pb.second * pa.second);
            } else if(pa.first < pb.first) {
                break;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
