#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    printf("%.2f\n", 1.0 * (a * b * c - a * b * t) / (b * c + a * c - a * b));
    return 0;
}
