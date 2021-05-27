/*************************************************************************
	> File Name: 18.MAX.c
	> Author:
	> Mail:
	> Created Time: Wed 26 May 2021 03:39:45 PM CST
 ************************************************************************/
#include <stdio.h>

#define P(a) { \
    printf("%s = ", #a); printf("%d\n", (a)); \
}

#define MAX(A, B) ({ \
    __typeof(A) __a = (A); __typeof(B) __b = (B); \
    __a > __b ? __a : __b; \
})



int main() {
    int a = 7;
    P(a);
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}
