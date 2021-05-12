/*************************************************************************
	> File Name: 10.fac.c
	> Author:
	> Mail:
	> Created Time: Wed 12 May 2021 08:16:53 PM CST
 ************************************************************************/
#include <stdio.h>

int fac(int n) {
    if (n == 1) return 1;
    return n * fac(n -1);
}
int main() {
    int n;
    while (~scanf("%d", &n)) {
    printf("fac%d = %d\n", n, fac(n));
    }
    return 0;
}
