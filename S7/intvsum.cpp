#include <bits/stdc++.h>

using namespace std;
int num_arr[100001];
int sum_arr[100001];
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num_arr[i];
    sum_arr[n - 1] = num_arr[n - 1];
    for (int j = n - 2; j >= 0; j--)
        sum_arr[j] = sum_arr[j + 1] + num_arr[j];


    for (int right = n - 1; right > 0; right--) {
        for (int left = 0; left < right; left++) {
            if (num_arr[left] + num_arr[right] == sum_arr[left + 1] - sum_arr[right]) {
                cout << right + 1 << endl;
                exit(0);
            }
        }
    }
    cout << 0 << endl;
}
