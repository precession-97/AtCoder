#include <bits/stdc++.h>
using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D, std::vector<long long> E){
    
    int a_mx_idx = 0;
    int b_mx_idx = 0;
    int c_mx_idx = 0;
    int d_mx_idx = 0;
    int e_mx_idx = 0;
    
    vector<long long>::const_iterator p;
    p = max_element(A.begin(), A.end());
    a_mx_idx = static_cast<int>(p - A.begin()); // 0
    p = max_element(B.begin(), B.end());
    b_mx_idx = static_cast<int>(p - B.begin()); // 1
    p = max_element(C.begin(), C.end());
    c_mx_idx = static_cast<int>(p - C.begin()); // 2
    p = max_element(D.begin(), D.end());
    d_mx_idx = static_cast<int>(p - D.begin()); // 3
    p = max_element(E.begin(), E.end());
    e_mx_idx = static_cast<int>(p - E.begin()); // 4

    vector<int> idx_vec = {a_mx_idx, b_mx_idx, c_mx_idx, d_mx_idx, e_mx_idx};
    int mx = 0;
    foreach_comb(5, 3, [&](int *indexes) {
        int one_idx = idx_vec[indexes[0]];
        int two_idx = idx_vec[indexes[1]];
        int thr_idx = idx_vec[indexes[2]];
        
        int a_mx = max({A[one_idx], A[two_idx], A[thr_idx]});
        int b_mx = max({B[one_idx], B[two_idx], B[thr_idx]});
        int c_mx = max({C[one_idx], C[two_idx], C[thr_idx]});
        int d_mx = max({D[one_idx], D[two_idx], D[thr_idx]});
        int e_mx = max({E[one_idx], E[two_idx], E[thr_idx]});

        int score = min({a_mx, b_mx, c_mx, d_mx, e_mx});
        mx = max(mx, score);

    });

    cout << mx << endl;

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    std::vector<long long> C(N);
    std::vector<long long> D(N);
    std::vector<long long> E(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
        scanf("%lld",&C[i]);
        scanf("%lld",&D[i]);
        scanf("%lld",&E[i]);
    }
    solve(N, std::move(A), std::move(B), std::move(C), std::move(D), std::move(E));
    return 0;
}
