#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    // 小数点以下14桁
    double pi = 3.14159265358979;

    // cout (default)
    cout << "[default cout] pi = " << pi << endl;

    // cout (setprecision)
    cout << "[setpresicion] pi = " << setprecision(14) << pi << endl;
    // 3.1415926535898 (整数部を含めて14桁)

    // cout (setprecision)
    cout << "[with fix] pi = " << fixed << setprecision(14) << pi << endl;
    // 3.14159265358979 (少数点以下14桁)

    return 0;
}