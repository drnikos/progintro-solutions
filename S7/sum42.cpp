#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    string c;
    cin >> a >> b;
    a += b;
    a % 10 == 2 && (a / 10) % 10 == 4 ? cout << "yes" << endl : cout << "no" << endl;
}
