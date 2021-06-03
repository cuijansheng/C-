#include <stdio.h>
int main() {
    printf("2\n");
    int digit;
    int divisor;
    for (digit = 3; digit <= 15; digit += 2) {
        for (divisor = 3; divisor < digit; divisor += 2) {
			if (digit % divisor == 0) {
                break;
            }
        }
        if (divisor == digit) {
            printf("%d\n", digit);
        }
    }
    return 0;
}
