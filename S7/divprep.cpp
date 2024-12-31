#include <iostream>

using namespace std;

int gcd (int a, int b) {
    if (a == 0 || b == 0) return a+b;
    if (a > b) return gcd(a%b, b);
    else return gcd(a, b%a);
}

int main() {
    int N, num, temp;
    cin >> N;
    cin >> num;
    int prevgcd = num;

    for (int i = 1; i < N; i++) {
        cin >> temp;
        prevgcd = gcd(prevgcd, temp);
        if (prevgcd == temp && temp < num) {
            num = temp;
        }
    }

    cout << num << endl;

    return 0;
}