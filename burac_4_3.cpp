#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, C, c;

    cout << "Side a: ";
    cin >> a;

    cout << "Side b: ";
    cin >> b;

    cout << "Angle C: ";
    cin >> C;

    C = C * M_PI / 180;

    c = sqrt((a * a) + (b * b) - (2 * a * b * cos(C)));

    cout << "Side c: " << c << endl;

    return 0;
}