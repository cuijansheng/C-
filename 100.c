#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double ans = 0;
    for (int i = 0; i < 6; i++) {
        ans = (ans + n) * 1.00417;
    }
    printf("$%.2lf\n", ans);
    return 0;
}
