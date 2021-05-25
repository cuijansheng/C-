/*************************************************************************
	> File Name: 17.array.c
	> Author:
	> Mail:
	> Created Time: Tue 25 May 2021 04:15:39 PM CST
 ************************************************************************/

#include <stdio.h>

void func(int p[][4][2]) {
    printf("func : ");
    printf("p = %p, p + 1 = %p\n", p, p + 1);
    return ;
}

int main() {
    int arr[100][4][2] = {0};
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p\n", arr + 1);
    func(arr);
    return 0;
}
