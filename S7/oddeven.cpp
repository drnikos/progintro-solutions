#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, temp;
    cin >> n;
    unordered_map<int, int> li;
    int temp_sum = 0, current_max = 0;
    li[0] = -1;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        temp_sum += (temp % 2 == 0) ? 1 : -1;
        li.find(temp_sum) != li.end() ? current_max = max(current_max, i - li[temp_sum]) : li[temp_sum] = i;
    }
    cout << current_max << endl;
}
