#include <iostream>

using namespace std;

int list[100001];

int main() {
    ios_base::sync_with_stdio(false);
    int no_swaps = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    if (n <= 1) {
        cout << 0 << endl << list[0] << endl << list[0] << endl;
    }
    int left = 0, right = 1;
    while (right < n && left < n - 1) {
        if (list[left] > 0 && list[right] < 0) {
            swap(list[right - 1], list[right]);
            swap(list[left], list[right - 1]);
            no_swaps += right - left;
            left++;
            right++;

        } else if (list[left] > 0 && list[right] > 0) {
            right++;

        } else {
            right++;
            left++;
        }
    }
    cout << no_swaps << endl << list[0] << endl << list[n - 1] << endl;
}
