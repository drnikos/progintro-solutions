#include <iostream>
// #include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double res = a * a + b * b;
    res > 1 ? cout << "outside\n" : res == 1 ? cout << "border\n" : cout << "inside\n";
}
