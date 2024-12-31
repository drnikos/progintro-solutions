#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[2000001];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long int res = 0;
  int temp_sum = 0;
  int left = 0;

  for (int right = 0; right < n; right++) {
    temp_sum += arr[right];

    while (temp_sum > k && left <= right) {
      temp_sum -= arr[left];
      left++;
    }

    res += (right - left + 1);
  }

  cout << res << endl;
  return 0;
}
