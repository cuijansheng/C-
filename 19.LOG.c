/*************************************************************************
	> File Name: 19.LOG.c
	> Author:
	> Mail:
	> Created Time: Thu 27 May 2021 01:43:29 PM CST
 ************************************************************************/
#include <stdio.h>

#define DEBUG
#ifdef DEBUG
#define log(frm, args...) {\
    printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__);\
    printf(frm, ##args);\
    printf("\n");\
}
#else
#define log(frm, args...)
#endif

#define contact(a, b) a##b

int main() {
    int a = 123, b = 345, abcdef = 0;
    log("%d", a);
    log("%d", b);
    log("hello world\n");
    contact(abc, def) = 112233;
    log("%d",abcdef);
    return 0;
}
