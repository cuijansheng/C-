#include <stdio.h>
#include <inttypes.h>
#include <stdarg.h>

int max_int(int n, ...) {
    int ans = INT32_MIN;
    va_list arg; //定义一个代表参数列表的变量
    va_start(arg, n); //初始化参数列表
    while (num--) { //循环读入num个参数，取出其中的最大值，放到ans变量中
        int temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg); //销毁参数列表
    return ans;
}

int main() {
    printf("%d\n", max_int(3, 12, 0, -2));
    printf("%d\n", max_int(5, 12, 0, -2, 33, 1));
    printf("%d\n", max_int(3, 12, 0, -2, 33, 1));
    return 0;
}
