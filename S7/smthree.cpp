#include <cstdio>
int main() {
    int a, b, c, res;
    scanf("%d%d%d", &a, &b, &c);
    res = a <= b ? a <= c ? a : c : b <= c ? b : c;
    printf("%d\n", res);
}
