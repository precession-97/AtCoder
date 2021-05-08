#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a = 24;
    int b = 36;
    // Greatest common divisor
    cout << __gcd(a, b) << endl;
    // Least common multiple
    cout << a / __gcd(a, b) * b << endl;

    ////// Over 2 elements version /////
    vector<int> num_arr{12, 24, 36};
    // Gratest common divisor
    int gcd = num_arr[0];
    for(int i = 1; i < num_arr.size(); i++) {
        gcd = __gcd(gcd, num_arr[i]);
    }
    cout << gcd << endl;
    // Least common multiple
    int lcm = num_arr[0];
    for(int i = 1; i < num_arr.size(); i++) {
        lcm = lcm / __gcd(lcm, num_arr[i]) * num_arr[i];
    }
    cout << lcm << endl;

    return 0;

}