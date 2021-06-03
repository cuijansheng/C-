#include <stdio.h>
int main() {
    int digit;
    digit = 2;
    do {
        printf("%d\n", digit);
        digit += (2 + (digit % 2 -1));
    } while (digit <= 15);
    return 0;
}
