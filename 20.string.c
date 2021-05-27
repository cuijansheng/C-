/*************************************************************************
	> File Name: 20.string.c
	> Author:
	> Mail:
	> Created Time: Thu 27 May 2021 03:11:31 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[11] = {0};
    int n;
    while (~scanf("%d", &n)) {
        sprintf(str, "%X", n);
        printf("%s has %ld digits!\n", str, strlen(str));
    }
    return 0;
}
