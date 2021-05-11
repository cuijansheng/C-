/*************************************************************************
	> File Name: 116.c
	> Author:
	> Mail:
	> Created Time: Tue 27 Apr 2021 10:02:16 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, tem;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        tem = a;
        a = b;
        b = tem;
    }
    if (a > c) {
        tem = a;
        a = c;
        c = tem;
    }
    if (b > c) {
        tem = b;
        b = c;
        c = tem;
    }
    if (a + b <=  c) {
        printf("illegal triangle\n");
    }else {
        if (a * a + b * b > c * c) {
            printf("acute triangle\n");
        }else if (a * a + b * b == c * c) {
            printf("right triangle\n");
        }else {
            printf("obtuse triangle\n");
        }
    }
    return 0;
}
