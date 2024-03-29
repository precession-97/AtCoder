#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long X, std::vector<long long> A){

    // Sortint from A[1] to A[N]
    sort(A.begin() + 1, A.end());

    // Binary search
    bool exists = false;
    int left = 1, right = N;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(A[mid] == X) {exists = true; break;}
        if(A[mid] > X) right = mid - 1;
        if(A[mid] < X) left = mid + 1;
    }

    if(exists) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }

}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long X;
    std::scanf("%lld", &X);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, X, std::move(A));
    return 0;
}
