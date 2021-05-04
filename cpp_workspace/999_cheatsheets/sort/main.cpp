#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {
    
    int a[8] = {8, 3, 7, 1, 4, 6, 2, 5};

    // {8, 3, 7, 1, 4, 6, 2, 5} -> {1, 2, 3, 4, 5, 6, 7, 8}
    sort(a, a + 8);
    for (int i = 0; i < 8; i++) cout << a[i] << endl;
    
    cout << "-----" << endl;

    int b[8] = {8, 3, 7, 1, 4, 6, 2, 5};
    
    // {3, 7, 1, 4} -> {7, 4, 3, 1}
    sort(b + 1, b + 5, greater<int>());    
    for (int i = 0; i < 8; i++) cout << b[i] << endl;

    cout << "-----" << endl;

    // vector sort
    vector<int> c = {8, 3, 7, 1, 4, 6, 2, 5};
    // NG : sort(c, c + 8);
    sort(c.begin(), c.end());
    for(int e : c) cout << e << endl;

    return 0;
}