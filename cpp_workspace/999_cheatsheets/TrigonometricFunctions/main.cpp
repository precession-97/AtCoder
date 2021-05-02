#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double degree = 90.0;

    // incorrect (need : degree -> radian)
    printf("%.12lf\n", sin(degree));

    // correct
    double pi = 3.141592653589793238;
    double radian = degree / 180.0 * pi;
    printf("%.12lf\n", sin(radian));
    printf("%.12lf\n", cos(radian));
    printf("%.12lf\n", tan(radian));
    return 0;
}