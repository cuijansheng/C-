/*************************************************************************
	> File Name: 117.c
	> Author:
	> Mail:
	> Created Time: Tue 27 Apr 2021 12:01:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int a1 = a, a2 = 0;
    while (a) {
        a2 = a2 * 10 + a % 10;
        a /= 10;
    }
    printf(a1 == a2 ? "YES\n": "NO\n");
    return 0;
}
