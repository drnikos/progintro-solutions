#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = a * b;
    int fp = (res / 10) % 10;
    int sp = (res / 100) % 10;
    cout << sp << fp << endl;
}
