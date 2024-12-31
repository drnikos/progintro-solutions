#include <iostream>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  if (n < 3) {
    cout << 0 << endl;
    return 0;
  }

  bool dp[5000001] = {false};

  for (int p5 = 1; p5 <= n; p5 *= 5) {
    for (int p3 = 1; p3 <= n; p3 *= 3) {
      for (int p2 = 1; p2 <= n; p2 *= 2) {
        int sum = p5 + p3 + p2;
        if (sum <= n) {
          dp[sum] = true;
        }
      }
    }
  }

  int total = 0;
  for (int i = 3; i <= n; i++) {
    if (dp[i]) {
      total++;
    }
  }

  cout << total << endl;

  return 0;
}
