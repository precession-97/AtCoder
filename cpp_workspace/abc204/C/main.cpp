#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;
vector<bool> seen;

void dfs(const Graph &G, int s) {
    seen[s] = true;
    for(int next_v : G[s]) {
        if(seen[next_v]) {
            continue;
        }
        dfs(G, next_v);
    }
}

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B){
    Graph g(N);
    for(int i = 0; i < M; i++) {
        g[A[i] - 1].push_back(B[i] - 1);
    }
    
    long long ans = 0;
    for(int i = 0; i < N; i++) {
        seen.assign(N, false);
        dfs(g, i);
        for(int j = 0; j < N; j++) {
            if(seen[j]) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
