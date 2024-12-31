#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a % 42;
    b % 42 == d &&c % 42 == d ? cout << d << endl : cout << "no" << endl;
}
