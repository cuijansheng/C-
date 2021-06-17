#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double a = 0;
    for (int i = 0; i < 6; i++) {
        a = a + n;
        a = a * 1.00417;
    }
    printf("$%.2lf\n", a);
    return 0;
}
