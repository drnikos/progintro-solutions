#include <cmath>
#include <iostream>

using namespace std;
int li[1000000];
int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> li[i];
    }
    int l = 0, r = a - 1;
    int res = li[r] + li[l];
    while (l < r) {
        int cs = li[r] + li[l];
        if (abs(res) > abs(cs)) {
            res = cs;
        }
        if (cs < 0) {
            l++;
        } else if (cs > 0) {
            r--;
        } else {
            res = 0;
            break;
        }
    }
    cout << res << endl;
}
