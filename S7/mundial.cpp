#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if ((a - 1930) % 4 == 0 && a != 1942 && a != 1946 && a > 1929)
        cout << "yes\n";
    else
        cout << "no\n";
}
