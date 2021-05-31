/*************************************************************************
	> File Name: 24.main.c
	> Author:
	> Mail:
	> Created Time: Fri 28 May 2021 06:29:49 PM CST
 ************************************************************************/
#include <stdio.h>  //main函数的有参形式

int main(int argc, char *argv[], char *env[]) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i. argv[i]);
    }
    for (int i = 0; env[i]; i++) {
        printf("env[%d] = %s\n", i. env[i]);
    }
    return 0;
}
