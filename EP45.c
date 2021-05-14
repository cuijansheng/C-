/*************************************************************************
	> File Name: EP45.c
	> Author:
	> Mail:
	> Created Time: Thu 13 May 2021 10:28:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int64_t Triangle(int64_t n) {
    return n * (n + 1) / 2;
}

int64_t  Pentagonal(int64_t n) {
    return n * (3 * n - 1) / 2;
}

int64_t Hexagonal(int64_t n) {
    return n * (2 * n - 1);
}

int64_t binary_search(int64_t (*arr)(int64_t), int64_t n, int64_t x) {
    int64_t head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (mid < 0) printf("errer\n");
        if (arr(mid) == x) return mid;
        if (arr(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    int n = 143;
    while (1) {
        n++;
        int64_t temp = Hexagonal(n);
        if (binary_search(Pentagonal, temp, temp) == 0) continue;
            printf("%"PRId64"\n", temp);
            break;
    }
    return 0;
}
