#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int res = 0;
    if (a % 10 == 7)
        res++;
    if ((a / 10) % 10 == 7)
        res++;
    std::cout << res << std::endl;
}
