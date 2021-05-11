/*************************************************************************
	> File Name: 7.struct_program.c
	> Author:
	> Mail:
	> Created Time: Tue 11 May 2021 09:07:58 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int val = rand() % 100;
        i && printf(" ");
        printf("%d", val);
        //if (val % 1) cnt += 1;
        cnt += (val & 1);
    }
    printf("\n");
    printf("cnt : %d\n", cnt);
    return 0;

    int a = 0, b = 0;
    if ((a++) && (b++)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
