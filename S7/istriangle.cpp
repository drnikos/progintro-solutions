#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (abs(a - b) < c && a + b > c)
        cout << "yes\n";
    else
        cout << "no\n";
}
