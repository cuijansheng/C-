/*************************************************************************
	> File Name: 16.my_sqrt.c
	> Author:
	> Mail:
	> Created Time: Tue 25 May 2021 03:19:41 PM CST
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

double my_sqrt(double x) {
    double head = 0, tali = 1.0 + x, mid;
    #define EPSL 1e-7 // 1 * 10 ^ -6
    while (tail - head > EPSL) {
        mid = (head + tail) / 2.0;
        if (mid * mid < x) head = mid;
        else tail = mid;
    }
    #undef EPSL
    return head;
}

int main() {
    double x;
    printf(~scanf("%d\n", INT32_MAX))
    while (~scanf("%lf", &x)) {
        printf("sqlr(%g) =%g\n", x, sqlt(x));
        printf("my_sqrt(%g) = %g\n", x, my_sqrt(x));
    }
    return 0;
}
