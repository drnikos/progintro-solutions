
// #include <bits/stdc++.h>
// using namespace std;

// int li[10000000];

// int main() {
//     ios_base::sync_with_stdio(false);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> li[i];
//     }

//     int max_sum = 0;
//     int l = 0, r = n - 1;
//     int sl = li[l], sr = li[r];

//     while (l < r) {
//         if (sl < sr) {
//             l++;
//             sl += li[l];
//         } else if (sl > sr) {
//             r--;
//             sr += li[r];
//         } else {
//             max_sum = sl;
//             l++;
//             r--;
//             if (l < n && r >= 0) {
//                 sl += li[l];
//                 sr += li[r];
//             }
//         }
//     }

//     cout << max_sum << endl;
// }
#include <cstdio>

const int lim = 10000000;
int sum[lim];
int rev_sum[lim];
int input[lim];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    int cur_sum = 0, cur_rev_sum = 0;
    for (int i = 0; i < n; i++) {
        cur_sum += input[i];
        cur_rev_sum += input[n - i - 1];
        sum[i] = cur_sum;
        rev_sum[i] = cur_rev_sum;
    }

    int x = 0, y = 0, max = 0;

    while (x + y < n - 1) {
        if (sum[x] == rev_sum[y]) {
            max = sum[x];
            x++;
            y++;
        } else if (sum[x] > rev_sum[y]) {
            y++;
        } else {
            x++;
        }
    }
    printf("%d\n", max);

    return 0;
}
