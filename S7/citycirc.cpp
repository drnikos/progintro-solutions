//#include <iostream>
//using namespace std;
//
//int towns[1000001];
//
//int main() {
//    int n, min = 0, total_income = towns[n - 1];
//    int lowest = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> towns[i];
//    for (int i = n - 2; i >= 0; i--) {
//        towns[i] += towns[i + 1];
//        total_income += towns[i];
//        if (towns[i] < lowest)
//            lowest = towns[i];
//    }
//    if (total_income < 0) {
//        cout << 0 << endl;
//        exit(0);
//    }
//    int temp_income = 0;
//    for (int i = n - 1; i >= 0; i--) {
//        if (towns[i] < 0) {
//            if (temp_income > min) {
//                min = i;
//            }
//            temp_income = 0;
//        } else {
//        }
//    }
//
//    cout << endl << min << endl;
//}
#include <iostream>
using namespace std;

int main() {
    signed long long sum = 0, deficit = 0;
    int N, answer = 1;
    cin >> N;

    int temp;
    for (int i = 1; i <= N; i++) {
        cin >> temp;
        sum += temp;
        if (sum < 0) {
            deficit += sum;
            sum = 0;
            answer = i + 1;
        }
    }

    if (sum + deficit >= 0) cout << answer << endl;
    else cout << "0" << endl;

    return 0;
}
