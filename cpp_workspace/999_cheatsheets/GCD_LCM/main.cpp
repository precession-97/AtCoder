#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 24;
    int b = 36;
    // Greatest common divisor
    cout << __gcd(a, b) << endl;
    // Least common multiple
    cout << a / __gcd(a, b) * b << endl;
    return 0;
}