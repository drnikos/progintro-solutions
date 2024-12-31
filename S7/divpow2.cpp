#include <bits/stdc++.h>

using namespace std;
int main() {
    int a;
    int res = 0;
    cin >> a;
    for (int i = 2, b = 1; i <= a; i *= 2, b++) {
        if (a % i == 0)
            res = b;
    }
    cout << res << endl;
}
