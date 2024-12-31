#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a % 17 == 0) {
        if (b % 42 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    } else if (b % 17 == 0) {
        if (a % 42 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    } else
        cout << "no" << endl;
}
