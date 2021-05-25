/*************************************************************************
	> File Name: 14.prime.c
	> Author:
	> Mail:
	> Created Time: Thu 20 May 2021 05:18:52 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};
void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i; j <= MAX_N / i; j ++) {
            prime[j * i] = 1;
        }
    }
    return ;
}

int main() {
    init();
   /* for (int i = 1; i <= prime[0]; i++) {
    printf("%d\n", prime[i]);
    }*/
    printf("%d\n", prime[0]);
    return 0;
}
