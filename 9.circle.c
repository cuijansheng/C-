/*************************************************************************
	> File Name: 9.circle.c
	> Author:
	> Mail:
	> Created Time: Tue 11 May 2021 09:46:27 AM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

int check(int n, int base) {
    if (n < 0) return 0;
    int temp = 0, x = n;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}
int get_digit(int n) {
    int digits = 0;
    do {
        n /= 10;
        digits++;
    } while (n);
    return digits;
}
 int main() {
     int n;
     while (~scanf("%d", &n)) {
        printf("%d %s\n", n, check(n, 10) ? "is a reverse num" : "is not recerse num");
     printf("%d has %d digits!\n", n, get_digit(n));
     printf("%d has %d digits!\n", n, (int)floor(log10(n)) + 1);
     }
     return 0;
 }
