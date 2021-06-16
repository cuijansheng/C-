#include<stdio.h>
int main() {
    int begin, n;
    scanf("%d%d", &begin, &n);
    if(begin < 0) begin = 0;
    if (begin % 2 != 0) begin += 1;
    for (int i = begin, j =0; j < n; j++, i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
