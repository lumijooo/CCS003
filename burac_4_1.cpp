#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
 {
    double leg1, leg2, hypotenuse;

    cout << "First leg: ";
    cin >> leg1;

    cout << "Second leg: ";
    cin >> leg2;

    hypotenuse = sqrt((leg1 * leg1) + (leg2 * leg2));

    cout << setprecision(2) << "Hypotenuse: " << hypotenuse << endl;

    return 0;
}