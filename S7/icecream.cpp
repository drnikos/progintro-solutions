#include <iostream>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, k, temp;
    cin >> n >> k;
    k *= 2;
    queue<int> ind;
    int count = 0, mk = 1;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ind.push(temp);
        count++;

        if (ind.back() - ind.front() <= k) {
            if (count > mk)
                mk = count;
        } else
            while (ind.back() - ind.front() > k) {
                count--;
                ind.pop();
            }
    }
    cout << mk << endl;
}
