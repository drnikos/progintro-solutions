#include <bits/stdc++.h>

using namespace std;
int main() {
    int target;
    int num[6];
    for (int i = 0; i < 6; i++) {
        int c = getchar() - 48;
        num[i] = int(c);
    }
    cin >> target;
    int f = num[0], l = num[5];
    // cout << f << endl << l << endl;
    if (f == target && l == target)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
