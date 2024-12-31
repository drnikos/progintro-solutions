#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = a * b;
    (res / 1000 != 0 && res / 10000 == 0) ? cout << "yes\n" : cout << "no\n";
}
