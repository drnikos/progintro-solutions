#include <cstdio>

int main() {
    int a, b, res = 0;
    scanf("%d%d", &a, &b);
    if (a % 2 == 0)
        res++;
    if (b % 2 == 0)
        res++;
    printf("%d\n", res);
}
