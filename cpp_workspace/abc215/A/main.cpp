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

void solve(std::string S){
    if(S == "Hello,World!") {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
