#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long sum = 0, max_sum = 0;
    int N, temp;
    cin >> N;
    cin >> temp;

    // for case of every number being less or equal to zero
    int max_least = temp;

    for (int i = 1; i < N; i++) {
        if (temp > 0) {
            sum += temp;
        } else {
            if (sum > max_sum)
                max_sum = sum;
            if (sum + temp > 0)
                sum += temp;
            else
                sum = 0;
            if (temp > max_least)
                max_least = temp;
        }
        cin >> temp;
    }

    if (sum > max_sum)
        max_sum = sum;

    if (max_sum > 0)
        cout << max_sum << endl;
    else
        cout << max_least << endl;

    return 0;
}
