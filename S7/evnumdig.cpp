#include <cstdio>
#include <iostream>

int main() {
    int res = 0;
    int c;
    c = getchar();
    while (c >= 48 && c <= 57) {
        res++;
        c = getchar();
    }

    res % 2 == 0 ? std::cout << "yes\n" : std::cout << "no\n";
}
