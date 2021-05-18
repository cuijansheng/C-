#include <stdio.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a); //最大公倍数
}

int lcm(int a, int b) {
    return a / gcd(a,b) *b; //最小公倍数
}

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
        printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
    }
    return 0;
}
