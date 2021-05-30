#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    double pi = 3.14159265358979;

    // cout (default)
    cout << "[default cout] pi = " << pi << endl;

    // cout (setprecision)
    cout << "[setpresicion] pi = " << setprecision(15) << pi << endl;
    return 0;
}